#include <stdio.h>

int main() {
    int item_count =0;
    int specified_item_no =0;
    int ans=0;
    printf("How many items r we addin today?!\n");
    scanf("%d",&specified_item_no);
    int numbers[specified_item_no];
    do {
        printf("input item:");
        fflush(stdin);
        scanf("%d",&ans);
        numbers[item_count] = ans;
        item_count ++;
    } while (item_count != specified_item_no);

    for (int i = 0; i < specified_item_no; i++) {
        printf("%s\n", numbers[i]);
    }
    return 0;
}
