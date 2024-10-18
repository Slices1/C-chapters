//stack
#include <stdio.h>

int push(int *array[], int size, int *headPointer, int valueToPush) {
    if (headPointer == size - 1) {
        return 1;
    }

    array[*headPointer] = valueToPush;
    *headPointer += 1;
    return 0;
}

int pop(int array[], int size, int headPointer) {
    return 1; //waht we popped
}

void printASCIIArt(int *array[], int size) {
    for (int i =0; i<size; i++) {
        printf("%d \n", array[size-i]);
    }
    
}

  
int main() 
{
    int size = 6; //stack height
    int array[size];
    int headPointer = 0;
    char choice = 'a';
    while (choice != 'x') {
        printf("\nEnter choice:\n[1] pop\n[2] push\n[x] end\n");
        scanf("%c", &choice);

        if (choice == '1') {
            int poppedValue = pop(&array[0], size, &headPointer);
            if (poppedValue == 0) {
                printf("\nStack overflow error. Failed to pop");
            } else {
                printf("\nPopped: %d", poppedValue);
            }

        } else if (choice == '2') {
            int valueToPush;
            printf("\nEnter value to push: ");
            scanf("%d", &valueToPush);

            if (push(&array[0], size, &headPointer, valueToPush)) {
                printf("\nStack overflow error. Failed to push %d", valueToPush);
            } else {
                printf("\nPushed %d", valueToPush);
            }


        } 
        printASCIIArt(array, size);

    }

    return 0; 
} 