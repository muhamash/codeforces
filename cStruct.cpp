#include <stdio.h>

struct player {
    char name[1000];
    long long points[100];
};

int main()
{
    int n;
    scanf("%d", &n);
    struct player arr[n];

    long long maxPoints = 0;
    long long winner = -1;
    long long playerIndex = -1;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", arr[i].name, &arr[i].points[0]);
        if (arr[i].points[0] > maxPoints) {
            maxPoints = arr[i].points[0];
            playerIndex = i;

            // if(winner == -1)
            // {
            //     winner = i;
            // }
            // else 
            // {
            //     winner = i;
            // }
        }
    }

    printf("%s\n", arr[playerIndex].name);

    return 0;
}