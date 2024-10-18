#include <stdio.h>

void displayMyList(int myList[10][3]) {
    printf("\n Adress     |     Value     |     Pointer\n");
    printf("___________________________________________\n");
    for (int i = 0; i < 10; i++) {
        printf("%d          |      %d      |         %d\n", myList[i][0], myList[i][1], myList[i][2]);
    }
    myList[0][0] += 10;
}

int appendMyList(int myList[10][3], int nextFreePointer, int value){
    if (nextFreePointer == -1) {printf("\nList is full. Failed to add to list.\n"); return 1;}
    myList[nextFreePointer][1] = value;
    //find the end of the list:
    for (int i=0; i<10; i++) {
        if (myList[i][2] == -1) {
            myList[i][2] = myList[nextFreePointer][0];
        }
    }
    myList[nextFreePointer][2] = -1;
    printf("\nItem successfully appended to list.\n");
    return 0;
}

int findNextFreePointer(int myList[10][3]) { //returns -1 if not available. finds first adress with no references
    int referenceTally = 0;
    for (int i = 0; i< 20; i++) {
        referenceTally = 0;
        for (int j = 0; j< 20; j++) {
            if (myList[j][2] == myList[i][0]) {referenceTally+=1;}
        }

        if (referenceTally == 0) {return i;}
    }

    return -1;
}

int main() {
    printf(" _______   ______  __      __        __        __            __                        __        __        __              __     \n"
    "|       \\ |      \\|  \\    /  \\      |  \\      |  \\          |  \\                      |  \\      |  \\      |  \\            |  \\    \n"
    "| $$$$$$$\\ \\$$$$$$ \\$$\\  /  $$      | $$       \\$$ _______  | $$   __   ______    ____| $$      | $$       \\$$  _______  _| $$_   \n"
    "| $$  | $$  | $$    \\$$\\/  $$       | $$      |  \\|       \\ | $$  /  \\ /      \\  /      $$      | $$      |  \\ /       \\|   $$ \\  \n"
    "| $$  | $$  | $$     \\$$  $$        | $$      | $$| $$$$$$$\\| $$_/  $$|  $$$$$$\\|  $$$$$$$      | $$      | $$|  $$$$$$$ \\$$$$$$  \n"
    "| $$  | $$  | $$      \\$$$$         | $$      | $$| $$  | $$| $$   $$ | $$    $$| $$  | $$      | $$      | $$ \\$$    \\   | $$ __ \n"
    "| $$__/ $$ _| $$_     | $$          | $$_____ | $$| $$  | $$| $$$$$$\\ | $$$$$$$$| $$__| $$      | $$_____ | $$ _\\$$$$$$\\  | $$|  \\ \n"
    "| $$    $$|   $$ \\    | $$          | $$     \\| $$| $$  | $$| $$  \\$$\\ \\$$     \\ \\$$    $$      | $$     \\| $$|       $$   \\$$  $$ \n"
    " \\$$$$$$$  \\$$$$$$     \\$$           \\$$$$$$$$ \\$$ \\$$   \\$$ \\$$   \\$$  \\$$$$$$$  \\$$$$$$$       \\$$$$$$$$ \\$$ \\$$$$$$$     \\$$$$ \n");

    int myList[10][3] = {{23,20,71},//10 nodes, with a adress, value and pointer per node.
                        {14,52,23},
                        {30,10,12},
                        {10,69,30},
                        {60,42,65},
                        {12,15,60},
                        {71,91,-1}, //end
                        {65,62,14},
                        {56,-1,-1},
                        {53,-1,-1}};
    int listStartPointer = 10;
    int nextFreePointer = 8; //array address
    displayMyList(myList);
    appendMyList(myList, nextFreePointer, 99);
    nextFreePointer = findNextFreePointer(myList);
    printf("\nnextFreePointer now = %d.\n", nextFreePointer);
    displayMyList(myList);

    return 0;
}


//free nodes are denoted by not haivng any references
//end of list is denoted as the node a reference but no pointer