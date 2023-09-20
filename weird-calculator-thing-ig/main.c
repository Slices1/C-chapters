#include <stdio.h>

int main() {
    int myint = 0;
    float myfloat=0;
    char mychar=0;
    printf("Enter an integer: \n");
    scanf("%d",&myint);
    printf("Enter an float: \n");
    scanf("%f",&myfloat);
    printf("Enter an integer: \n");
    scanf(" %c",&mychar);

    float sum = myint-myfloat;
    printf("subtraction sum: %f\n",sum);
    sum = sum*mychar;
    printf("then multiplied by the char value: %f\n",sum);

    return 0;
}
