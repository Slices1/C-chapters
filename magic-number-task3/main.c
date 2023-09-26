#include <stdio.h>

int main() {
    int ans = 0;
    do {
        do {
            printf("Enter a number to be verified under the magician numerical protocol 2i7 (0-100):");
            scanf("%d", &ans);
        } while (ans < 0 || ans > 100);

        if (ans % 7 == 0 && 5*ans <= 100 || ans % 5 == 0 && 5*ans <= 100) {
            printf("it is magic\n");
        } else {
            printf("no magic to be found here..\n");
        }
    } while (ans !=100);
    return 0;
}
