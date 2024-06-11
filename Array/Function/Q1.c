//WAP to print the combination of two number without using function.
#include<stdio.h>
int main()
{
   int n,r,ncr,nfac=1,rfac=1,nrfac=1,i;
   printf("enter the value of n: ");
   scanf("%d",&n);
   printf("enter the value of r: ");
   scanf("%d",&r);
   for(i=1;i<=n;i++){
    nfac=nfac*i;
   }
   for(i=1;i<=r;i++){
    rfac=rfac*i;
   }
   for(i=1;i<=n-r;i++){
    nrfac=nrfac*i;
   }
   ncr=nfac/(rfac*nrfac);
   printf("the combination is %d",ncr);
   return 0;
}