#include <stdio.h>
int main() {
	int a,b,*c,*m,*n,sum;
	printf("Enter any two numbers:");
	scanf("%d %d",&a,&b);
	m = &a;
	n = &b;
	sum = a+b;
	c = &sum;
	printf("Sum is %d",*c);
	printf("Adress of sum is %d \n",c);
	printf("Values are: %d %d \n",*m,*n);
	printf("Adresses are: %d %d \n",m,n);
}
