#include <stdio.h>
int main()
{
    int n,p=0,r;
    printf("Enter any number\t");
    scanf("%d",&n);
    while (n!=0)
    {
        r = n%10;
        p = p*10+r;
        n = n/10;
    }
    printf("Reverse is %d\n",p);
    return 0;
}