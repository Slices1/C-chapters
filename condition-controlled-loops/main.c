#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int error=0,age=0;

    while (error != 1) {
        fflush(stdin);
        printf("Please enter your age:");
        error = scanf("%d",&age);
    }
    if (age<=100) {
        printf("You have %d years TO LIVE!!!",100-age);
    } else {
        printf("You should have died %d years ago :0",age-100);
    }

    return 0;
}
