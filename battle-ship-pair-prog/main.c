#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//hello

char PrintPlayerBoard(char gameboard[10][10]) {
    printf("\n--=Game Board=--");
    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%c ", gameboard[i][j]);
        }
    }
    return 0;
}

int main() {
    //initialisation
    srand (time(NULL) );
    int gaming = 1;
    int player_score=0;
    int computer_score =0;
    int length =0; //declares piece length for placement
    int posx,posy =0;

    //Creating the boards
    char gameboard[10][10];         // player blank board
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            gameboard[i][j] = '0';
        }
    }
    char computer_gameboard[10][10]; // computer blank board
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            computer_gameboard[i][j] = '0';
        }
    }

    for (int i=0; i<5; i++) {//placing boats
        length = i + 2;
        if (i>=2) {
            length = i + 1;
        }
        //player boat placement
        PrintPlayerBoard(gameboard);
        printf("\nWhere would you like to place your first boat of 1x%d dimensions? (column,row)\n",length);
        scanf("%d,%d",&posx,&posy);
        for (int j =0; j<length; j++) {
            gameboard[10 - posy - j][posx - 1] = 'X';
        }
        // computer boat placement
        posx = rand() % (10-length) + 0;
        posy = rand() % 10 + 0;
        for (int j =0; j<length; j++) {
            computer_gameboard[posy][posx] = 'X';
        }
        printf("\ncomputer game board\n");
        PrintPlayerBoard(computer_gameboard);

    }
    do {                                 // attacking loop
        //prints player gameboard
        PrintPlayerBoard(gameboard);

        //player attacking input
        printf("\nn",length);
        scanf("%d,%d",&posx,&posy);printf("Where wouldu like to place your attacking figures (row coloumn)");



        //exit condition check
        player_score += 5;
        if (player_score >= 17 || computer_score >= 17) {
            gaming =0;
        }
    } while (gaming == 1);
    printf("\nGame ended! player x won.");
    return 0;
}
