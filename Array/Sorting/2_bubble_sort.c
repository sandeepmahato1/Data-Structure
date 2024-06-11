////Programe to sort the element in ascending order 
#include<stdio.h>

void sandy(int *a,int n)
{
    for(int i=0;i<n-1;i++)      //for number of passes
    {
        for(int j=0;j<n-1-i;j++)//for number of comparision
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        //printf("\n");
    }
}
int main()
{
    int a[]={23,14,2,69,54,21};
    int n=sizeof(a)/sizeof(a[0]);//for calculating size of array.
    for(int i=0;i<6;i++)
    {
        printf("%d  ",a[i]);
    
    }
    sandy(a,n);                  //function calling with argument arr[] and n.
    
    printf("\nsorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
       // printf("\n");
    }
     
    return 0;
}