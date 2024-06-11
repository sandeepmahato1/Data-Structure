//programe to print summation of n number
#include<stdio.h>
void sum(int n,int s) //void is use for no passing value.
{
    if(n==0)
    {
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}