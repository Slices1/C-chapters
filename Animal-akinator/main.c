#include <stdio.h>

int main() {
    char array[][20] = {"Horse", "cow", "pig", "sheep", "dog", "cat", "lion", "tiger", "whale", "dolphin", "seal", "penguin","ostrich", "sparrow", "spider", "ant", "bee", "wasp", "termite", "octopus", "squid"};
    for (int i = 0; i < 19; i++)
    {
        printf("%s\n", array[i]);
    }
    return 0;
}
//commenttest1
