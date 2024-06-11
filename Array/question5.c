//same as previous question4 for triplet
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int res=0,i,j,k;
    int x=12;
    for(i=0;i<10;i++)
    {
        for(j=i+1;i<10;i++)
        {
            for(k=j+1;k<10;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    res++;
                    printf("\n%d %d %d",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("\n%d",res);
}