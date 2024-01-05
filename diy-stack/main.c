#include <stdio.h>

int pointer = 4;
int stack[5];

void push() {
    //use pointer
    int value = -256000;
    do {
        printf("Enter an integer value:\n");
        scanf("%d",&value);
        printf("Inputted: %d\n", value);
    } while (value<-255000);
    printf("Value accepted.\n");
    stack[pointer] = value; // add value
    pointer -= 1; //decrease pointer
    return;
}

int pop() {
    int value = stack[pointer+1]; //use pointer
    stack[pointer+1] = NULL; // delete value
    pointer += 1; //increase pointer
    return value;
}

int main() {
    //declerations
    char actionChoice = 'q';
    int popped = -1;
    int poppedList[100];
    int poppedListRear = 0;
    fflush(stdin);
    for (int i=0; i<5; i++) {
        stack[i] = NULL;
    }
    for (int i=0; i<100; i++) {
        poppedList[i] = NULL;
    }

    printf("Stack\n");
    while (actionChoice != 'e') {
        for (int i = 0; i < 5; i++) {                    //print stack
            if (stack[i] == NULL) {
                printf("| |\n");
            } else {
                printf("|%d|\n", stack[i]);
            }
        }

        printf("What action do you want to do?\n[p] Push\n[x] Pop\n[e] Exit\n");
        scanf("%c", &actionChoice);
        if (actionChoice == 'p') {
            push();
        } else if (actionChoice == 'x') {
            poppedList[poppedListRear] = pop();
            poppedListRear += 1;
        }
    }
    printf("All popped (in order):\n");
    for (int i=0; i<100; i++) {
        if (poppedList[i] == NULL) {
            i = 100;
        } else {
            printf("%d, ", poppedList[i]);
        }
    }
    return 0;
}
