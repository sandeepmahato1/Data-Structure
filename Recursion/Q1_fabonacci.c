//to print the factorial of any number.
#include<stdio.h>
int factorial(int n)
{
    if(n==0||n==1) // base value 
    return 1;
    int ans=n*factorial(n-1);
    return ans ;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("\n%d",fact);
    return 0;
}