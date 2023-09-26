#include <stdio.h>

int main() {
    char loop_option;
    int val1 =0;
    int val2 =0;

    printf("c for checking a number, r for checking a whole range: ");
    scanf("%c", &loop_option);
    do {

        if (loop_option == 'c') { // cehck  a single number
            printf("\nEnter the number you'd like checked for armstrength:");
            scanf("%d", &val1);


        } else if (loop_option == 'r') { // check a range of da noomberssss!!!
            printf("\nEnter the start & end of the range seperated by only commas:");
            scanf("%d,%d", &val1, &val2);
            printf("%d, %d", val1, val2);
        }


        printf("\ne for exit, c for checking a number, r for checking a whole range: ");
        scanf("%c", &loop_option);
    } while (loop_option != 'e');

    return 0;
}


//    int item_count =0;
//    int specified_item_no =0;
//    int ans=0;
//    printf("How many items r we addin today?!\n");
//    scanf("%d",&specified_item_no);
//    int numbers[specified_item_no];
//    do {
//        printf("input item:");
//        fflush(stdin);
//        scanf("%d",&ans);
//        numbers[item_count] = ans;
//        item_count ++;
//    } while (item_count != specified_item_no);
//
//    for (int i = 0; i < specified_item_no; i++) {
//        printf("%d, ", numbers[i]);
//    }
//    return 0;
//}
