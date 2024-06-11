//Write a program to print the table of any numbers.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("\n%d",n*i);
       
    }
    /*int i;
    for(i=9;i<=90;i+=9)
    {
        printf("\n%d",i);
    }*/

}