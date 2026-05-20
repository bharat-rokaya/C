#include <stdio.h>
#include <stdlib.h>
int main() {
	char task[100];
	int choice;
	do {
	printf("1. Add Task. \n");
	printf("2. View task \n");
	printf("3. Exit \n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("Enter the task: ");
			scanf("%s",task);
			printf("Task successfully added. \n");
			break;
		case 2:
		    printf("All Tasks: \n");
			printf("%s \n",task);
			break;
		case 3:
			exit(1000);
			break;
		default :
		   printf("Please enter the correct choice!");	
	}
} while(choice!=3);
}
