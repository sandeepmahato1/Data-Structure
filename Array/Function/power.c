#include<stdio.h>
int power(int x,int y)
{
    int m=1;
    for(int i=1;i<=y;i++)
    {
        m=m*x;
    }
    // for(int i=x;i<=y;i++)
    // {
    //     pow=x*x;
    // }
    // return pow;
    return m;
    
}
int main()
{
    int a,b;
    printf("enter the base number:");
    scanf("%d",&a);
    printf("enter the power number:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("power of araise to b is %d",p);
    return 0;
}