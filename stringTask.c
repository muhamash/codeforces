#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[500];
    char list[100];
    char vowels[] = "aeiouy";
    scanf("%s", string);

    int j = 0;
    // printf("%d", strlen(string));
    for (int i = 0; i < strlen(string); i++){
        char ch = tolower(string[i]);
        if(strchr(vowels, ch) == NULL){
            list[j++] = '.';
            list[j++] = ch;
        }
    };

    list[j] = '\0';
    printf("%s", list);
    return 0;
};