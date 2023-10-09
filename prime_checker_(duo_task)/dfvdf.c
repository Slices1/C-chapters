//
// Created by jonah.wilsontroy23 on 09/10/2023.
//

#include <stdio.h>

int main() {
    int num=0;
    int count=0;
    printf("Enter number");
    scanf("%d", &num);

    for (int i=0;i<num;i++) {
        if (num % i ==0) {
            count++;
        }
    }

    if (count == 2) {
        printf("Number is prime");
    } else {
        printf("Number isn't prime");
    }


    return 0;
}
