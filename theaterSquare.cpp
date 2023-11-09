#include <stdio.h>
// #include <iostream>

int main()
{
    int n, m, a;

    scanf("%d %d %d", &n, &m, &a);
    long long width_flag = (n + a - 1) / a;
    printf("%lld \n", width_flag);
    long long length_flag = (m + a - 1) / a;
    printf("%lld \n", length_flag);
    long long total_flags = width_flag * length_flag;

    // std::cout
    //     << total_flags << std::endl;
    printf("%lld", total_flags);
    return 0;
}