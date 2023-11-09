#include <stdio.h>
#include <string.h>

void checkString(char *str)
{
    int len = strlen(str);
    if (len > 10)
    {
        printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
    }
    else
    {
        printf("%s\n", str);
    }
};

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char word[100];
        scanf("%s", word);
        // printf("%s\n", word);
        checkString(word);
    };

    return 0;
};