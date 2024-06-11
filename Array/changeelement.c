//Write a program to copy the element into other array
#include<stdio.h>
int main()
{
    int a[3]={4,8,2};
    int i;
    a[0]=54;
    a[2]=546;
    a[1]=4685;
    for(i=0;i<=2;i++)
    {
        printf("%d\t",a[i]);
    }
    
}