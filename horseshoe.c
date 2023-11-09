#include <stdio.h>

int main() {
    int s1 = 7 , s2 = 7, s3 = 7, s4 = 7;
    // scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    int distinctColors = 0;
    if (s1 != s2 && s1 != s3 && s1 != s4)
        distinctColors++;
    if (s2 != s3 && s2 != s4)
        distinctColors++;
    if (s3 != s4)
        distinctColors++;

    int minHorseshoesToBuy = 3 - distinctColors;
    printf("%d\n", minHorseshoesToBuy);

    return 0;
}