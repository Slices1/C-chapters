#include <stdio.h>
#include <string.h>

int main() {
    int attempts = 0;
    int win_check;
    const char word[6] = {'h','e','l','l','o','\0'};
    char guess[6] = {'x','x','x','x','x','\0',};
    char revealed_word[6] = {'?','?','?','?','?','\0'};
    do {
        fflush(stdin);
        printf("\nWord: %s\nMake a guess: ",revealed_word);
        scanf("%s",&guess);
        for (int i=0; i<5; i++) {
            if (guess[i] == word[i]) {
                revealed_word[i] = word[i];
            }
        }
        attempts++;
        win_check = strcmp(guess, word);
    } while ((attempts < 5) && (win_check != 0));


    if (win_check == 0) {
        printf("\nWell done, you completed it in %d attempts!\nThe word WAS: %s",attempts,word);
    } else {
        printf("\nsomebody ran out of attempts :,(\nThe word was: %s",word);
    }

    return 0;
}