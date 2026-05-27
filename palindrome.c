#include <stdio.h>
    int main()
{
    int n,p=0,r,z;
    printf("Enter any number\t");
    scanf("%d",&n);
    z=n;
    while (n!=0)
    {
        r = n%10;
        p = p*10+r;
        n = n/10;     
    }
    if (z==p)
    {
    printf("%d is palindrome \n",z);
    }
   else
   {
    printf("%d is not palindrome \n",z);
   }
    return 0;
}