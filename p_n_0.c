#include <stdio.h>

void CheckNum(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    CheckNum(num);
    return 0;
}