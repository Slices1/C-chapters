#include <stdio.h>

int main() {
    int choice;
    int times;
    printf("What times tabole wana see!\n");
    scanf("%d",&choice);
    printf("for how mdany values!\n");
    scanf("%d",&times);
    for (int i=1; i<times+1; i++) {
        printf("%d x %d = %d\n",choice,i,choice*i);
    }
    return 0;
}
