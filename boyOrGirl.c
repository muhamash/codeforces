#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* function(const char username[])
{
    int count = 0;
    char str[26] = {0};
    int length = strlen(username);

    for(int i = 0; i < length; i++) 
    {
        char c = tolower(username[i]);
        if(c != ' ' && !str[c - 'a']) 
        {
            str[c - 'a'] = 1;
            count++;
        }
    }

    return (count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";
}

int main()
{
    char username[100];
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    const char* output = function(username);
    printf("%s", output);

    return 0;
}