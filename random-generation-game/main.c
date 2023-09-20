#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand (time(NULL) );
    int ranvar = rand() % 10+1;
    int guess = 0;
    printf("Only cheaters look at this number >:| %d\n",ranvar);
    printf("guess teh random (1-10) variable)!\n");
    scanf("%d",&guess);
    if (guess == ranvar) {
        printf("Congratulations, the ran var WAS: %d",ranvar);
    } else if (guess == ranvar+1 || guess == ranvar -1) {
        printf("Soooo close my guy. The ran var was %d",ranvar);
    } else {
        printf("There is no hope for you. The ran var was %d",ranvar);
    }
    return 0;
}
