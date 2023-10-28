#include <stdio.h>

int main() {
    int day, month, year, age;
    printf("INPUT DATE OF BIRTH! (dd,mm,yyyy): \n");
    scanf("%d,%d,%d",&day,&month,&year);

    int age = ((2023*365.25) - (year*365.25+month*30.5+day))/365;


    printf("you are %d years old",age);
    return 0;
}
