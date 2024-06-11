//WAP to find the duplicate element in a given array.
#include<stdio.h>
int main()
{
    int a[10]={1,2,1,1,4};
    int i,j,f=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
        }
    }
    if(f==1){
    printf("\n%d is found  duplicate element",a[i]);
    }
    else{
        printf("duplicate element is not found");
    }
}