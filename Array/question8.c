//Given an array containing element from 1 to 100 except one element missing in this array.Find that missing element.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,f=0,temp,d;
    printf("enter the element do you want to search: ");
    scanf("%d",&d);
    for(i=0;i<10;i++)
    {
        if(d==a[i])
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
    {
        printf("\n%d is found at position %d",d,i+1);
    }
    else{
            printf("\n%d is not found in array",d);
        }

}