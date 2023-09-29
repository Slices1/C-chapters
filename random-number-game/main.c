#include <stdio.h>
#include <stdlib.h>

checkPrime(int N) {
    int flag = 1;
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        return(1);
    }
    else {
        return(0);
    }
}




int main() {
    srand(time(NULL));
    int guess;
    int bet =0;
    int credits = 10;
    char loopydoopy;
    int win_multiplier;
    do {
        win_multiplier = 1;
        do {
            printf("How much would you like to bet. (You have %d credits available): ",credits);
            scanf("%d",bet);
        } while (bet>credits || bet<0);

        int random_number = rand() % 30 + 1;

        printf("Guess my noomber!!! you little insert homer simpson strangling bart clip.\n debug: %d", random_number);
        scanf("%d", &guess);
        if (guess == random_number) {
            if (random_number % 10 ==0) {
                win_multiplier *=3;
            }
            if (checkPrime(random_number) == 1) {
                win_multiplier *=5;
            }
            if (random_number < 5) {
                win_multiplier *=2;
            }
        } else {
            credits -= bet;
        }

        printf("Credits now total: %d\nCash out? (y=yes, else=no)",credits);
        scanf("%c",&loopydoopy);
    } while (credits>0 && loopydoopy != 'y');
    printf("You cashed out.");
    return 0;
}
