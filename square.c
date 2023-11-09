#include <stdio.h>
int main(){

    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    long long width = (n + a - 1) / a;
    long long height = (m + a - 1) / a;
    long long total = width * height;

    printf("%lld", total);

    return 0;
}