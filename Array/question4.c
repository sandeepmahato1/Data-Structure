//find the count of number in a array whose pairs of element  is equal to the sum of given number.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int x=12,i,j,totalcount=0;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]+a[j]==x)
            {
                totalcount++;
                printf("\n%d %d",a[i],a[j]);
                
            }
        }
    }
    printf("\n%d",totalcount);
}