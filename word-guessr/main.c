#include <stdio.h>

int main() {
    int attempts = 0;
    const char word[5] = {"hello"};
    char guess[5] = {"xxxxx"};
    char revealed_word[5] = {"?????"};
    do {
        fflush(stdin);
        printf("\nWord: %s\nMake a guess: ",revealed_word);
        scanf("%s",&guess);
        for (int i=0; i<5; i++) {
            if (guess[i] == word[i]) {
                revealed_word[i] = word[i];
            }
        }
        attempts += 1;
    } while (guess != word && attempts <= 5);


    if (guess == word) {
        printf("Well done, you completeted it in %d attempts!",attempts);
    } else {
        printf("somebody ran out of attempts :,(");
    }

    return 0;
}





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
