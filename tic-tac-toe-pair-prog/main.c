#include <stdio.h>

int main() {
    printf("\n\nWelcome!!! to the tic of the tac of the toe (or the naughts of the crosses idrk)\n");
    int count = 0;
    int win = 0;
    int x,y;
    char GB[3][3];
    char PL; // player_letter
    for (int i=0; i<3; i++) {              //initialisation
        for (int j=0; j<3; j++) {
            GB[i][j] = ' ';
        }
    }

    do {
        for (int i=0; i<2; i++) {   //alternates between player turns
            printf("\n>Player %d's turn.\n\n",i+1);
            if (i==0) {
                PL = 'O';
            } else {
                PL = 'X';
            }

            do {
                printf("Enter the column:");      //inputs
                scanf("%d", &x);
                printf("Enter the row:");
                scanf("%d", &y);
                y=3-y;
                x=x-1;
            } while (GB[y][x] != ' ');
            GB[y][x] = PL;  //sets the borard

            for (int j =0; j<2; j++) {       //prints the game board
                for (int k =0; k<3; k++) {
                    printf("|%c",GB[j][k]);
                }
                printf("|\n_______\n");
            }
            for (int j=0; j<3; j++) {
                printf("|%c",GB[2][j]);
            }
            printf("|");

            for (int j = 0; j<2; j++)  {      // win condition checks
                if ((GB[j][0] == PL && GB[j][1] == PL && GB[j][2] == PL) || (GB[0][j] == PL && GB[1][j] == PL && GB[2][j] == PL)) {
                    win = i+1;
                    i=1;
                }
            }
            if ((GB[0][0] == PL && GB[1][1] == PL && GB[2][2] == PL) || (GB[0][2] == PL && GB[1][1] == PL && GB[2][0] == PL)) {
                win = i+1;
                i=1;
            }

            count++;
        }
    } while (count < 9 && win == 0);

if (win == 1)
{
    printf("\nPlayer 1 (O) is the winner!");
}
else if (win == 2) {
    printf("\nPlayer 2 (X) is the winner!");
} else {
    printf("\nUnlucky, the game ended in a draw");
}
    return 0;
}
