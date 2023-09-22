#include <stdio.h>
#include <math.h>

int main() {
    char choice = 'x';
    int childtickets = 0;
    int adulttickets = 0;
    float childcost =0;
    float adultcost =0;

    printf("Input for a weekday (w), weekend (s), or bank holiday (b): \n");
    scanf("%c",&choice);
    printf("Input the amount of adult tickets and child tickets desired (seperated by comams): \n");
    scanf("%d,%d",&adulttickets,&childtickets);
    if (choice == 'w') {
        childcost =5*childtickets;
        adultcost =8*adulttickets;
    } else if (choice == 's') {
        childcost =7.5*childtickets;
        adultcost =12*adulttickets;
    } else if (choice == 'b') {
        childcost = 7.5 * childtickets;
        adultcost = 14 * adulttickets;
    }
    printf("Child ticket(s) amount: %d\n Adult ticket(s) amount: %d\n Child ticket(s) cost: %f\n Adult ticket(s) cost: %f\n Total cost: %f", childtickets, adulttickets, childcost, adultcost, childcost+adultcost);

    return 0;
}
