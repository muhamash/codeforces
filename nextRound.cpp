#include <stdio.h>

void check_number(int len, int *score, int inputs[])
{
    int kScore = inputs[*score - 1];
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (inputs[i] >= kScore && inputs[i] > 0)
        {
            count++;
        };
    };
    printf("%d\n", count);
};

int main()
{
    int len, score, inputs[100];
    scanf("%d %d", &len, &score);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &inputs[i]);
    };
    check_number(len, &score, inputs);

    return 0;
};

// int main()
// {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     int scores[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &scores[i]);
//     }

//     int kScore = scores[k - 1];
//     int advancers = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (scores[i] >= kScore && scores[i] > 0)
//         {
//             advancers++;
//         }
//     }

//     printf("%d\n", advancers);

//     return 0;
// }
