#include <stdio.h>
#include <string.h>
struct student {
    char name[30];;
    int roll;
    float marks;
};

int main() {

    int n, i, j;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n], temp;

    for(i=1; i<=n; i++) {
        printf("Enter details for student %d:\n", i);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    
    for(i=1; i<=n; i++) {
        for(j=i+1; j<=n; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n Sorted records are:");

    for(i=1; i<=n; i++) {
        printf("Name: %s \n", s[i].name);
        printf("Roll: %d \n", s[i].roll);
        printf("Marks: %.2f \n", s[i].marks);
    }
}    

