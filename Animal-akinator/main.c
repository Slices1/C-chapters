#include <stdio.h>

int main() {
    int choice =0;
    char ans = "x";
    char array[][20] = {"sparrow", "squid", "penguin", "octopus", "spider", "ants", "termite", "wasp", "bee", "ostrich", "tiger", "lion", "dolphin", "seal", "whale", "cow", "pig", "sheep", "horse", "cat", "dog"};
    for (int i = 0; i < 21; i++)
    {
        printf("%s\n", array[i]);
    }
    printf("Is your animal a mammal? (y/n): ");
    scanf("%c",&ans);
    if (ans == "y") {
        choice = 9;
        printf("Native to English soil? (y/n): ");
        scanf("%c",&ans);
        if (ans == "y") {
            choice = 15;
            printf("Is it a great human companion? (y/n): ");
            scanf("%c",&ans);
            if (ans == "y") {
                choice = 18;
                printf("Is it a house pet? (y/n): ");
                scanf("%c",&ans);
                if (ans == "y") {
                    choice = 19;
                    printf("Is it man's best friend? (y/n): ");
                    scanf("%c",&ans);
                    if (ans == "y") {
                        choice = 20;
                    }
                }
            } else {
                printf("Fluffy? (y/n): ");
                scanf("%c",&ans);
                if (ans == "y") {
                    choice = 17;
                } else {
                    printf("Related to pepper pig? (y/n): ");
                    scanf("%c",&ans);
                    //cutting out the need of an else
                    choice = 15;
                    if (ans == "y") {
                        choice = 16;
                    }
                }
            }
        }
    } else {

    }




    printf("%s\n", array[choice]);
    return 0;
}