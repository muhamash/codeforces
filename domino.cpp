#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int result = (m * n + 1) / 2; // Add 0.5 to round up
    printf("%d\n", result);
    return 0;
}