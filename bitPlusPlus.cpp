#include <stdio.h>
int main()
{

    int num, x = 0;
    char loop[100];
    scanf("%d", &num);
    // getchar();
    for (int i = 0; i < num; i++)
    {
        scanf("%s", loop);
        // fgets(loop, sizeof(loop), stdin);
        if (loop[0] == '+' || loop[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    };
    printf("%d\n", x);
    return 0;
}