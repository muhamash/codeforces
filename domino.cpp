#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    long long total = (long long)m * n;
    printf("lld", total);
    int cal = total / 2;
    printf("%d", cal);

    return 0;
}