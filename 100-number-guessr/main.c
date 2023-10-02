#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand (time(NULL) );
    int guess;

    for (int i=0; i<10; i++) {
        int computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi = rand() % 101 + 0;
        printf("\nOnly cheaters look at this number >:| %d\n",computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi);
        printf("guess teh random (0-100) variable)!\n");
        scanf("%d",&guess);
        if (guess == computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi) {
            printf("Congratulations, the you got it o' co-reckt: %d",computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi);
        } else if (guess - computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi <= 10 && guess - computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi >= -10) {
            printf("HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT HOT!! The ran var was %d",computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi);
        } else  if (guess - computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi <= 20 && guess - computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi >= -20){
            printf("WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM WARM ",computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi);
        } else {
            printf("siggghhhhhhhhhhhhhhhhhhh too bad, it was %d",computerismyloveanddreamsicouldneverlivewithoutmySWEAETAAASAAAAWAAAAAAEAAAARAAAAAAAAAATAAAAAAAAAAAAAAAAAAPAAcandi);
        }
    }


    return 0;
}







//int main() {
//    srand (time(NULL) );
//    char rocceokoapaerepsiclors;
//    int a;
//    char loopydooopy = 'n';
//
//
//    do {
//        int computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis = rand() % 3+0;
//        printf("\nDEBUG computer number: %d",computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis);
//
//        printf("\nWelcome my friend!!!! T!o the land of rokky papa ssseesee!! input your chouice of wisdom (r/p/s): ");
//        scanf("%c", &rocceokoapaerepsiclors);
//
//        //re-assigning user input
//        if (rocceokoapaerepsiclors == 'r') {
//            a = 0;
//        } else if (rocceokoapaerepsiclors == 'p') {
//            a = 1;
//        } else if (rocceokoapaerepsiclors == 's') {
//            a = 2;
//        } else {
//            printf("\nwrong input :(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((");
//            break;
//        }
//
//        //win conditions
//        if (a == computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis) {
//            printf("\nYou drawed lmaoooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo");
//        } else if (a - computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis ==
//                   -2 ||
//                   a - computereverytimneileavemyhouseifallflatonthegroundthatmakesmereallysadbutanywayitiswhatitis ==
//                   1) {
//            printf("\nthe victorious one wahoo");
//        } else {
//            printf("\nboohoo oh poor you, i guess theres always tommorow :,(    *(fake tear)*");
//        }
//
//        printf("\nExit? (y/n): ");
//        scanf(" %c",&loopydooopy);
//        fflush(stdin);
//    } while (loopydooopy == 'n');
//    return 0;
//}
