#include <stdio.h>
int main() {
    int length, area, perimeter;
    
    printf("Enter the length: ");
    scanf("%d", &length);

    area = length * length;
    perimeter = 4 * length;

    printf("Area of the square: %d\n", area);
    printf("Perimeter of the square: %d\n", perimeter);

    return 0;
}