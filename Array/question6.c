#include<stdio.h>
int main()
{
    //WAP  to reverse the array element by the use of extra array.


    // int a[5]={5,4,3,5,6},i;
    // int b[5];
    // for(i=0;i<5;i++)
    // {
    //     b[i]=a[4-i];
    // }
    //  for(i=0;i<5;i++)
    // {
    //     printf("%d ",b[i]);
    // }


    //WAP to print the character element and memory location of that specific element in an array.

    
    int a[10]={'s','r','p','n','o'};
    int i=0;
    while(a[i]!='\0')
    {
        printf("\n%c\t%u",a[i],&a[i]);
        i++;
        
    }
    
}