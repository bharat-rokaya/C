#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char name[50];
    int roll;
    float marks;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    } else {
        printf("Enter student name: ");
        fgets(name, sizeof(name), stdin);
        printf("Enter student roll number: ");
        scanf("%d", &roll);
        printf("Enter student marks: ");
        scanf("%f", &marks);

        fprintf(file, "Name: %sRoll Number: %d\nMarks: %.2f\n", name, roll, marks);
        fclose(file);
        printf("Student information saved to file.\n");
    }
    return 0;
}