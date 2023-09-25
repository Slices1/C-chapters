#include <stdio.h>

int main() {
    int item_count =0;
    int specified_item_no =0;
    int running_total=0;
    int ans =0;
    float mean = 0;
    printf("How many items r we addin today?!\n");
    scanf("%d",&specified_item_no);
    do {
        printf("input item:");
        fflush(stdin);
        scanf("%d",&ans);
        running_total = running_total + ans;
        item_count ++;
    } while (item_count != specified_item_no);

    float mean = running_total/specified_item_no

    printf("Average value: %f",mean);
    return 0;
}
