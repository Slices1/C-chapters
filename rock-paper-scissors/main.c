#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand (time(NULL) );
    char rocceokoapaerepsiclors;
    int a;
    char loopydooopy = 'n';


    do {
        int computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis = rand() % 3+0;
        printf("\nDEBUG computer number: %d",computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis);

        printf("\nWelcome my friend!!!! T!o the land of rokky papa ssseesee!! input your chouice of wisdom (r/p/s): ");
        scanf("%c", &rocceokoapaerepsiclors);

        //re-assigning user input
        if (rocceokoapaerepsiclors == 'r') {
            a = 0;
        } else if (rocceokoapaerepsiclors == 'p') {
            a = 1;
        } else if (rocceokoapaerepsiclors == 's') {
            a = 2;
        } else {
            printf("\nwrong input :(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((");
            break;
        }

        //win conditions
        if (a == computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis) {
            printf("\nYou drawed lmaoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo");
        } else if (a - computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis ==
                   -2 ||
                   a - computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis ==
                   1) {
            printf("\nthe victorious one wahoo");
        } else {
            printf("\nboohoo oh poor you, i guess theres always tommorow :,(    *(fake tear)*");
        }

        printf("\nExit? (y/n): ");
        scanf(" %c",&loopydooopy);
        fflush(stdin);
    } while (loopydooopy == 'n');
    return 0;
}
