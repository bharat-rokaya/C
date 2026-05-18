#include <stdio.h>
int main() {
    int a, b, sum, diff, prod;
    float div;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            sum = a + b;
            printf("Sum = %d", sum);
            break;
        case 2:
            diff = a - b;
            printf("Difference = %d", diff);
            break;
        case 3:
            prod = a * b;
            printf("Product = %d", prod);
            break;
        case 4:
            div = (float)a / b;
            printf("Quotient = %.2f", div);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}