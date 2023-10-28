#include <stdio.h>

int main() {
    int nums[10];
    int running_total,highest,higherthanaverage=0;
    int lowest = 1999999999;

    for (int x=0;x<10;x++) {
        printf("Enter number %d: ",x+1);
        fflush(stdin);
        scanf("%d",&nums[x]);
        running_total += nums[x];
    }

    printf("\nAv. score: %d",running_total/10);
    for (int x=0;x<10;x++) {
        if (nums[x] > running_total/10) {
            higherthanaverage += 1;
        }
        if (nums[x] > highest) {
            highest = nums[x];
        }
        if (nums[x] < lowest) {
            lowest = nums[x];
        }
    }
    printf("\nScored higher than av total: %d",higherthanaverage);
    printf("\nHighest score: %d\nLowest score: %d",highest,lowest);
    return 0;
}
