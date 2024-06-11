#include <stdio.h>

int main()
{
   int a[5],d,i,j,f=0;
   for(i=0;i<=4;i++)
   {
    printf("enter the %d number: ",i+1);
    scanf("%d",&a[i]);
   }
   printf("\n enter any number which you want to search: ");
   scanf("%d",&d);

   for(i=0;i<=4;i++)
   {
    if(a[i]==d)
    {
        f=1;
        break;
    }
   }

   if(f==1)
   {
    printf("\n%d is at %d position ",d,i+1);
   }
   else{
    printf("\n%d is not found",d);
   }
}