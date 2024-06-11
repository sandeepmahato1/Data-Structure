// WAP to reverse the element of array without using an extra element.

#include<stdio.h>
int main()
{
    // int a[5]={1,2,3,4,5};
    // for(int i=4;i>=0;i--)
    // {
    //     printf("%d ",a[i]);
    // }

    //WAP to check the number is palindrome or not in an array.

    int a[5],i,j,f=0;
    printf("\nenter the number :");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=4;i<5&&j>=0;i++,j--)
    {
        if(a[i]==a[j])
        {
            f=1;
            // printf("the given number is palindrome");
        }
        else{
            printf("the given number is not palindrome");
        }
    }
    if(f==1)
    {
        printf("the given number is palindrome");
    }
}