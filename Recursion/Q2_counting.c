//progarme to print the counting in asscending or decending order.
#include<stdio.h>
void fun(int n)
{
    if(n==0)            //base vlue
    return;
    printf("%d\n",n);
    fun(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    fun(n);             //function with passing argument
    return 0;
}