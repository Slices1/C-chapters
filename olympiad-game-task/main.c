#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print_gameboards(int gameboard[4][4]) {
    printf("\n-=Game Board=-\n");
    for (int i = 0; i < 4; i++) {
        printf("\n");
        for (int j = 0; j < 4; j++) {
            if (gameboard[i][j] == 0) {
                printf("R ");
            } else if (gameboard[i][j] == 1) {
                printf("G ");
            } else if (gameboard[i][j] == 2) {
                printf("B ");
            } else {
                printf("  ");
            }
        }
    }
    return 0;
}

int main() {
    //declerations and initialisations
    srand(time(NULL) );
    int gameboard[4][4];
    int gameboard_clearer[4][4];
    int letter_gen;
    int rounds =0;
    int score =0;
    int blocksRemoved =0;
    int temp;

//generating game board
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        gameboard[i][j] = rand() % 3 + 0;
    }
}

for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        gameboard_clearer[i][j] = 0;
    }
}

    //game rounds
    while (1) {
        do {
            printf("\nHow many rounds would you like to play? (0-100): ");
            scanf("%d", &rounds);
        } while (rounds < 0 || rounds > 100);
        if (rounds == 0) {
            exit;
        }

        //printing gameboard
        print_gameboards(gameboard);

        //game start
        while (rounds > 0) {

            //horizontal adjacent blocks dissapear
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 4; j++) {
                    if (gameboard[i][j] == gameboard[i+1][j]) {
                        if (i < 2 && gameboard[i][j] == gameboard[i+2][j]) {
                            gameboard_clearer[i+2][j] = 1;
                            if (i == 0 && gameboard[i][j] == gameboard[i+3][j]) {
                                gameboard_clearer[i+3][j] = 1;
                            }
                        }
                        gameboard_clearer[i][j] = 1;
                        gameboard_clearer[i+1][j] = 1;
                    }
                }
            }
            //vertical
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 3; j++) {
                    if (gameboard[i][j] == gameboard[i][j+1]) {
                        if (j < 2 && gameboard[i][j] == gameboard[i][j+2]) {
                            gameboard_clearer[i][j+2] = 1;
                            if (j == 0 && gameboard[i][j] == gameboard[i][j+3]) {
                                gameboard_clearer[i][j+3] = 1;
                            }
                        }
                        gameboard_clearer[i][j] = 1;
                        gameboard_clearer[i][j+1] = 1;
                    }
                }
            }


            //blocks removed counted. score calculated
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (gameboard_clearer[i][j] == 1) {
                        gameboard_clearer[i][j] = 0;
                        score++;
                        gameboard[i][j] = 3;
                    }
                }
            }
            print_gameboards(gameboard);

            //blocks falling from gravity
            for (int j = 0; j < 4; j++) {
                if (gameboard[0][j] != 3 && gameboard[1][j] == 3) {
                    gameboard[1][j] = gameboard[0][j];
                    gameboard[0][j] = 3;
                }
                if (gameboard[1][j] != 3 && gameboard[2][j] == 3) {
                    gameboard[2][j] = gameboard[1][j];
                    gameboard[1][j] = gameboard[0][j];
                    gameboard[0][j] = 3;
                }
                if (gameboard[2][j] != 3 && gameboard[3][j] == 3) {
                    gameboard[3][j] = gameboard[2][j];
                    gameboard[2][j] = gameboard[1][j];
                    gameboard[1][j] = gameboard[0][j];
                    gameboard[0][j] = 3;
                }
            }
            print_gameboards(gameboard);

            //piece resetting
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    if (gameboard[i][j] == 3) {
                        gameboard[i][j] = rand() % 3 + 0;
                    }
                }
            }
            print_gameboards(gameboard);
            printf("\n>Score: %d", score);

            //round incrementation
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
