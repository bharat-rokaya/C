#include <stdio.h>
int main() {
	int a,b,*c,*d,sum;
	printf("Enter any two numbers:");
	scanf("%d %d",&a,&b);
	c = &a;
	d = &b;
	sum = a+b;
	printf("Sum is %d",sum);
	printf("Address of sum is %p \n",&sum);
	printf("Values are: %d %d \n",*c,*d);
	printf("Addresses are: %p %p \n",c,d);
}
