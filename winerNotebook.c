#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	struct round
	{
		char name[40];
		int score;
	};
	struct round all[n];
 
	long long int count=0,c=0;
	int alone=1;
	char answer[40];
 
	for(i=0;i<n;i++)
		scanf("%s%d",all[i].name,&all[i].score);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(strcmp(all[i].name,all[k].name)==0)
					alone=0;
		}
		if(all[i].score>count && alone==1)
		{
			count=all[i].score;
			strcpy(answer,all[i].name);
		}
		for(j=i;j>=0;j--)
		{
			if(strcmp(all[i].name,all[j].name)==0)
            {
            	c+=all[j].score;
            }
		}
		if(c>count)
		{
			count=c;
			strcpy(answer,all[i].name);
		}
			c=0;
	}
	printf("%s\n",answer);
	return 0;
}