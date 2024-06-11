//WAP to find the difference between the sum of element of odd indexes to the sum of element to the even indexes.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,sume=0,sumo=0;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            sume=sume+a[i];
        }
        else
        {
             sumo=sumo+a[i];
        }
    }
    int total=sumo-sume;
    printf("%d",total);
} 