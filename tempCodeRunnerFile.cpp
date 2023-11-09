#include <stdio.h>

void check_number(int len, int score, int inputs[i])
{
    int check = inputs[i] int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (check > score)
        {
            count++;
        };
    };
    printf("%d", count);
};

int main()
{
    int len, score;
    scanf("%d%d", &len, &score);
    for (int i = 0; i < len; i++)
    {
        int inputs[100];
        scanf("%d", &inputs[i]);
        check_number(len, score, inputs[i]);
    };

    return 0;
};