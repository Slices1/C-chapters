#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //initialisations...
    srand (time(NULL) );
    int list[10];
    int temp;
    //declaring random list
    printf("\nRandom list:     ");
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
