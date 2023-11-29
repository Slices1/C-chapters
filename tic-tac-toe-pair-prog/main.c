#include <stdio.h>

int main() {

    printf("Hello, World!\n");

    int count = 0;
    int win = 0;
    int x,y;
    char GB[3][3];
    char player_letter;
    for (int i=0; i<3; i++) {              //initialisation
        for (int j=0; j<3; j++) {
            GB[i][j] = ' ';
        }
    }

    do {
        for (int i=0; i<2; i++) {   //alternates between player turns
            if (i==0) {
                player_letter = 'O';
            } else {
                player_letter = 'X';
            }

            do {
                printf("Enter the row (reversed order): ");      //inputs
                scanf("%d", y);
                printf("Enter the coloumn: ");
                scanf("%d", x);
            } while (GB[y][x] != ' ');
            GB[y][x] = player_letter;  //sets the borard

            for (int j =0; j<2; j++) {       //prints the game board
                for (int k =0; k<3; k++) {
                    printf("|%d",GB[j][k]);
                }
                printf("|\n____\n");
            }
            for (int j=0; j<3; j++) {
                printf("|%d",GB[2][j]);
            }

            for (int j = 0; j<2; j++)
            {
                if (GB[j,0]) {
                    printf("placeholder");
                }
            }

            count++;

        }
    } while (count < 9 && win == 0);

if (win == 1)
{
    printf("Player 1 is the winner!");
}
else if (win == 2)
{
    printf("Player 2 is the winner!");
}
else
{
    printf("Unlucky, the game ended in a draw");
}




    return 0;
}
