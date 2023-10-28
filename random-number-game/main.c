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
            printf("\nHow much would you like to bet. (You have %d credits available): ",credits);
            scanf("%d",&bet);
        } while (bet>credits || bet<0);

        int random_number = rand() % 30 + 1;

        printf("\nGuess my noomber!!! you little insert homer simpson strangling bart clip.\n debug: %d\n", random_number);
        scanf("%d", &guess);

        credits -= bet;
        if (guess == random_number) {
            printf("JACKPOOOOOOOOOOOOOOOOOOOOOOOOOOOOt (you didnt lose any moneY)!\n");
            if (random_number % 10 ==0) {
                win_multiplier *=3;
                printf("Congrats bro, you hit a multiple of 10! payout x3");
            }
            if (checkPrime(random_number) == 1) {
                win_multiplier *=5;
                printf("Congrats bro, you hit a prime number! payout x5");
            }
            if (random_number < 5) {
                win_multiplier *=2;
                printf("Congrats bro, you hit a number below 5! payout x2");
            }
            credits += bet*win_multiplier;
        } else {
            printf("boohoooo :,(");
        }

        printf("\nCredits now total: %d\nCash out? (y=yes, else=no)",credits);
        scanf(" %c",&loopydoopy);
        fflush(stdin);
    } while (credits>0 && loopydoopy != 'y');
    printf("You cashed out with %d credits.",credits);
    return 0;
}
