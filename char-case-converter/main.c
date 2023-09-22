#include <stdio.h>

int main() {
    char megadoodoo;
    printf("Input an uppercase letter!!\n");
    scanf("%c",&megadoodoo);
    megadoodoo = megadoodoo + 32;
    printf("lowercase version: %c\n",megadoodoo);
    return 0;
}
