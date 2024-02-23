#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 1000
#define MAX_PLAYER_LENGTH 33

struct Player
{
    char name[MAX_PLAYER_LENGTH];
    int score;
    int firstRound;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Player players[MAX_PLAYERS];
    int numPlayers = 0;
    char winner[MAX_PLAYER_LENGTH];
    int max_score = -1001;

    for (int i = 0; i < n; i++)
    {
        char name[MAX_PLAYER_LENGTH];
        int score;
        scanf("%s %d", name, &score);

        int found = 0;
        for (int j = 0; j < numPlayers; j++) {
            if (strcmp(players[j].name, name) == 0) {
                players[j].score += score;
                found = 1;
                if (players[j].score > max_score || (players[j].score == max_score && players[j].firstRound < players[0].firstRound)) {
                    max_score = players[j].score;
                    strcpy(winner, players[j].name);
                }
                break;
            }
        }

        if (!found) {
            strcpy(players[numPlayers].name, name);
            players[numPlayers].score = score;
            players[numPlayers].firstRound = i;
            numPlayers++;
            if (score > max_score || (score == max_score && i < players[0].firstRound)) {
                max_score = score;
                strcpy(winner, name);
            }
        }
    }

    printf("%s\n", winner);

    return 0;
}