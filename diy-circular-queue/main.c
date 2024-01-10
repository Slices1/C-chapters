#include <stdio.h>

int headPointer = 0;
int tailPointer = 0;
int queue[20];
int amountEnqueued = 0;

int enqueue() {
    //use headPointer
    int value = -256000;
    do {
        printf("Enter an integer value:\n");
        scanf("%d", &value);
        printf("Inputted: %d\n", value);
    } while (value < -255000);
    printf("Value accepted.\n");

    if (amountEnqueued == 20) {
        printf("eeeorr");
        return -1;
    }
    queue[tailPointer] = value; // add value
    tailPointer += 1;
    amountEnqueued += 1;
    if (tailPointer == 20) {
        tailPointer = 0;
        return 1;
    }
}

    int dequeue() {
        int value = queue[headPointer]; //use headPointer
        queue[headPointer] = NULL; // delete value
        headPointer += 1; //increase headPointer
        amountEnqueued -+ 1;
        if (headPointer >= 20) {
            headPointer = 0;
        }
        return value;
    }

    int main() {
        //declerations
        fflush(stdin);
        char menuChoice = 'q';
        int dequeued = -1;
        int dequeuedList[100];
        int dequeuedListTail = 0;
        fflush(stdin);
        for (int i = 0; i < 20; i++) {
            queue[i] = NULL;
        }
        for (int i = 0; i < 100; i++) {
            dequeuedList[i] = NULL;
        }

        printf("queue\n");
        while (menuChoice != 'x') {
            for (int i = 0; i < 20; i++) {                    //print queue
                if (queue[i] == NULL) {
                    printf(" , ");
                } else {
                    printf("%d, ", queue[i]);
                }
            }

            printf("\nWhat action do you want to enact?\n[e] enqueue\n[d] dequeue\n[x] Exit\n");
            scanf("%c", &menuChoice);
            if (menuChoice == 'e') {
                if (enqueue() == -1) {
                    dequeuedList[dequeuedListTail] = -31103;
                    dequeuedListTail += 1;
                }
            } else if (menuChoice == 'd') {
                dequeuedList[dequeuedListTail] = dequeue();
                dequeuedListTail += 1;
            }
        }
        printf("All dequeued (in order) (values of -31103 are overflow errors):\n");
        for (int i = 0; i < 100; i++) {
            if (dequeuedList[i] == NULL) {
                i = 100;
            } else {
                printf("%d, ", dequeuedList[i]);
            }
        }
        return 0;
    }
