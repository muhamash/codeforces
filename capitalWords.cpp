#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];

    scanf("%s", string);
    if (*string >= 'a' && *string <= 'z')
    {

        *string = *string - 'a' + 'A';
    }

    printf("%s\n", string);

    return 0;
}
