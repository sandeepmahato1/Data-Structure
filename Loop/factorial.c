#include<stdio.h>
int main()
{
    int fac=1,i,n;
    printf("\nenter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("factorial is %d",fac);
    
}