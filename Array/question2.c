//WAP to count the number of element to a given number of element.
#include<stdio.h>
int main()
{
    int a[7]={2,5,8,6,45,78,0};
    int n,i,j;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        if(n<a[i])
        {
            printf("%d ",a[i]);
        }
    }
   

}