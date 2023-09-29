#include <stdio.h>

int main() {
    char character = 'X';
    for (int i=0; i<11; i++) { // each line
        for (int j=0; j<10;j++) { // each letter of 10
            if (i>9-j) {
                character = 'Y';
            }
            printf("%c", character);
            character = 'X';
        }
    printf("\n");
    }
    return 0;
}