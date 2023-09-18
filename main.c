#include <stdio.h>

int main() {
    float val1, val2 = 0;
    char operatorchoice='x';
    float output =0;
    printf("input 2 floats seperated by commas: \n");
    scanf("%f,%f",&val1,&val2);
    printf("do you want to multiply (*), divide (/), add (+), subtract (-)");
    scanf(" %c",&operatorchoice);
    if( operatorchoice == '*' ) {
        output=val1*val2;
    } else if( operatorchoice == '/') {
        output=val1/val2;
    } else if( operatorchoice == '+') {
        output=val1+val2;
    } else if( operatorchoice == '-') {
        output=val1-val2;
    } else {
        printf("wat\n");
    }
    printf("Equation: %f %c %f\n",val1,operatorchoice,val2);
    printf("Output: %f",output);
    return 0;
}
