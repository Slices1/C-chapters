#include <stdio.h>

int main() {
    int nums[3];

    for (int i=0;i<3;i++) {
        printf("Enter number %d: ",i+1);
        fflush(stdin);
        scanf("%d",&nums[i]);
    }

    if ((nums[0]+nums[1]+nums[2]) % 3 == 0 && nums[2] != nums[1] -1 && nums[1] != nums[0] -1) {
        printf("Valid.");
    } else {
        printf("Invalid.");
    }

    return 0;
}
