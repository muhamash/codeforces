
        if (players[i].score > max_score)
        {
            max_score = players[i].score;
            strcpy(winner, players[i].name);
        }
        else if (players[i].score == max_score && strcmp(players[i].name, winner) < 0)
        {
            strcpy(winner, players[i].name);
        }