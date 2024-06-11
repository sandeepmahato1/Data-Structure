//program to calculate the number of ways to climb the stairs.
#include<stdio.h>
int stairs(int n)
{
    if(n==1||n==2)
    {
        return n;
    }
    int totalways=stairs(n-1)+stairs(n-2);
    return totalways;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int ways=stairs(n);
    printf("%d",ways);
    return 0;
}