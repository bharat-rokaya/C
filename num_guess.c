#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num, guessNum;
    srand(time(0));
    num = rand() % 100 + 1;
    do {
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guessNum);

        if(guessNum < 1 || guessNum > 100) {
            printf("Invalid input! Please enter a number between 1 and 100.\n");
        } else if (guessNum > num) {
            printf("Too high! Try again.\n");
        } else if (guessNum < num) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number.\n");
            break;
        }
    } while (guessNum != num);
    return 0;   
}