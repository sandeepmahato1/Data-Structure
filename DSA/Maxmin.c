#include<stdio.h>
#include<stdio.h>
int max, min;
//int a[];
int maxmin(int a[],int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
  max = min = a[i];
  return (max,min);
 }
  else if(i == j-1)
  {
   if(a[i] <a[j])
   {
    max = a[j];
    min = a[i];
   }
   else
   {
    max = a[i];
    min = a[j];
   }
   return (max,min);
  }
  else
  {
   mid = (i+j)/2;
   maxmin(a,i, mid);
   max1 = max; min1 = min;
   maxmin(a,mid+1, j);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
    return (max,min);
  }

 }

int main ()
{
 //int i, num;
//  printf ("\nEnter the total number of numbers : ");
//  scanf ("%d",&num);
//  printf ("Enter the numbers : \n");
//  for (i=1;i<=num;i++)
//   scanf ("%d",&a[i]);
int a[]={6,5,4,96,54,21,2,32,61};
int n=sizeof(a)/sizeof(a[0]);
 max = a[0];
 min = a[0];
 maxmin(a,0,n-1);
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
 return 0;
}