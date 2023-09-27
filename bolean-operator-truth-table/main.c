#include <stdio.h>

int main() {
    int a,b,c;
    char gate;
    printf("Input a (and)/o (or)/n (not)/z (zor) for a truthtable:");
    scanf("%c",&gate);
    for (int i=0; i < 4;, i++) {
        b = (i&2) / 2;
        a = (i&1) /1 ;
        if (gate == 'a') {
            c = a && b
        } else if (gate == 'o') {
            c = a || b
        } else if (gate == 'n') {
            c = !a
        } else if (gate == 'z') {
            c = a && b
        }
        printf("%d %c %d = %d"a,gate,b,c);
    }
    return 0;
}
