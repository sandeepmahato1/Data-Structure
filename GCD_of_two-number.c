#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("enter the 1 number: ");
    scanf("%d",&a);

    printf("\nenter the 2 number: ");
    scanf("%d",&b);


    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("the gcd of %d and %d is: %d",a,b,gcd);
}