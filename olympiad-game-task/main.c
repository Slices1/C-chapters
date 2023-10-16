#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //declerations and initialisations
    srand (time(NULL) );
    char gameboard[4][4];
    int letter_gen;
    int rounds =0;
    int score =0;
    int blocksRemoved =0;
    char x;

//generating game board
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        letter_gen = rand() % 3 + 0;
        if (letter_gen == 0) {
            gameboard[i][j] = 'R';
        } else if (letter_gen == 1) {
            gameboard[i][j] = 'G';
        } else if (letter_gen == 2) {
            gameboard[i][j] = 'B';
        }
}
printf("\n");
}
    //game rounds
    while (1) {
        do {
            printf("\nHow many rounds would you like to play? (0-100): ");
            scanf("%d", &rounds);
        } while (rounds <= 0 || rounds > 100);
        if (rounds == 0) {
            exit;
        }
        //game start
        while (rounds > 0) {

            //printing game board
            printf("-=Game Board=-\n");
            for (int i = 0; i < 4; i++) {
                printf("\n");
                for (int j = 0; j < 4; j++) {
                    printf("%c ", gameboard[i][j]);
                }
            }

            //adjacent blocks dissapear
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++) {
                    if (gameboard[i][j] == gameboard[i+1][j]) {
                        gameboard[i][j],gameboard[i+1][j] = ' ';
                    }
                }
            }
            //vertical
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 3; j++) {
                    if (gameboard[i][j] == gameboard[i][j+1]) {
                        gameboard[i][j],gameboard[i][j+1] = ' ';
                    }
                }
            }


            //blocks removed counted. score calculated
            printf("\nblocks removed counted. score calculated");
            //blocks falling from gravity
            printf("\nblocks fall from gravity");
            //loop

            //win condition check
            printf("\nwin condition check");

            //score calculation
            printf("\nscore calculation");
            //round incrementation
            printf("\nround incrementation");
            rounds -= 1;
        }
        printf("\n>>Game ended.\n>Score: %d", score);
        return 0;
    }
}













int main2() {
    //initialisations...
    srand (time(NULL) );
    int list[10];
    int temp;
    //declaring random list
    printf("\nDEBUG: ");
    for (int i=0;i<10;i++) {
        list[i] = rand() % 101 + 0;
        printf("%d, ",list[i]);
    }
    //bubblesorting list
    for (int h =0;h<10;h++) {
        for (int i = 0; i < 10; i++) {
            if (list[i] > list[i + 1]) {
                temp = list[i + 1];
                list[i + 1] = list[i];
                list[i] = temp;
            }
        }
    }

    //outputting sorted list
    printf("\nThe sorted list: ");
    for (int i=0;i<10;i++) {
        printf("%d, ", list[i]);
    }
    return 0;
}
