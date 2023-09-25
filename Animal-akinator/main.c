#include <stdio.h>
    
int main() {
    int choice =0;
    char ans = "x";
    char array[][20] = {"sparrow", "squid", "penguin", "octopus", "spider", "ants", "termite", "wasp", "bee", "ostrich", "tiger", "lion", "dolphin", "seal", "whale", "cow", "pig", "sheep", "horse", "cat", "dog"};
    for (int i = 0; i < 21; i++)
    {
        printf("%s\n", array[i]);
    }
    printf("Is your animal a mammal? (y/n):");
    scanf(" %c",&ans);
    printf("DEBUG: %c",ans);
    if (ans == 'y') {
        choice = 9;
        printf("Native to English soil? (y/n):");
        scanf(" %c",&ans);
        if (ans == 'y') {
            choice = 15;
            printf("Is it a great human companion? (y/n):");
            scanf(" %c",&ans);
            if (ans == 'y') {
                choice = 18;
                printf("Is it a house pet? (y/n):");
                scanf(" %c",&ans);
                if (ans == 'y') {
                    choice = 19;
                    printf("Is it man's best friend? (y/n):");
                    scanf(" %c",&ans);
                    if (ans == 'y') {
                        choice = 20;
                    }
                }
            } else {
                choice = 17;
                printf("Fluffy? (y/n):");
                scanf(" %c",&ans);
                if (ans == 'n') {
                    choice = 15;
                    printf("Central to Pepper Pig? (y/n):");
                    scanf(" %c",&ans);
                    if (ans == 'y') {
                        choice = 16;
                    }
                }
            }
        } else {
            printf("Sea-faring? (y/n):");
            scanf(" %c",&ans);
            if (ans == 'y') {
                printf("Humungous? (y/n):");
                scanf(" %c",&ans);
                if (ans == 'y') {
                    choice = 14;
                } else {
                    choice = 12;
                    printf("Has whiskers? (y/n):");
                    scanf(" %c",&ans);
                    if (ans == 'y') {
                        choice = 13;
                    }
                }
            } else {
                printf("Able to kill you in an instant? (y/n):");
                scanf(" %c",&ans);
                choice = 9;
                if (ans == 'y') {
                    printf("In MGM Pictures' branding? (y/n):");
                    scanf(" %c",&ans);
                    choice = 10;
                    if (ans == 'y') {
                        choice = 11;
                    }
                }
            }
        }
    } else {
        printf("Insect? (y/n):");
        scanf(" %c",&ans);
        if (ans == 'y') {
            printf("Flies? (y/n):");
            scanf(" %c",&ans);
            if (ans == 'y') {
                printf("Farmed for honey? (y/n):");
                scanf(" %c",&ans);
                choice = 7;
                if (ans == 'y') {
                    choice = 8;
                }
            } else {
                printf("6 legs? (y/n):");
                scanf(" %c",&ans);
                choice = 4;
                if (ans == 'y') {
                    printf("Snacks on wood? (y/n):");
                    scanf(" %c",&ans);
                    choice = 5;
                    if (ans == 'y') {
                        choice = 6;
                    }
                }
            }
        } else {
            printf("Sea-faring? (y/n):");
            scanf(" %c",&ans);
            choice = 0;
            if (ans == 'y') {
                choice = 1;
                printf("2 eyes? (y/n):");
                scanf(" %c",&ans);
                if (ans == 'y') {
                    choice = 2;
                    printf("Tentacle-y? (y/n):");
                    scanf(" %c",&ans);
                    if (ans == 'y') {
                        choice = 3;
                    }
                }
            }
        }
    }

    printf("%s\n", array[choice]);
    return 0;
}