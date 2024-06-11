//program to calculate the fibonacci number.
#include<stdio.h>
int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    int x=fibo(n-1)+fibo(n-2);
    return x;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int f=fibo(n);
    printf("fibonacci number of  %dth is %d",n,f);
    return 0;
}