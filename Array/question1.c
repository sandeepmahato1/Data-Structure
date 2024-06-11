//WAP to increament by 10 in even indexes and exceeds by double to its odd indexes.
#include<stdio.h>
int main()
{
   int a[10]={5,2,3,6,9,7,8,1,2,9};
   int i,j;
   for(i=0;i<10;i++)
   {
    if(i%2==0)
    {
        printf("\n%d",a[i]+10);
    }
    else{
        printf("\n%d",a[i]*2);
    }
   }
}