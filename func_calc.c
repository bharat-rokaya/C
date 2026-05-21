#include <stdio.h>

int Add(int a, int b) {
    return a + b;
}

int Diff(int a, int b) {
    return a - b;
}   

int Prod(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

int main() {
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", Add(num1, num2));
    printf("Difference: %d\n", Diff(num1, num2));
    printf("Product: %d\n", Prod(num1, num2));
    printf("Quotient: %d\n", Div(num1, num2));

    return 0;
}