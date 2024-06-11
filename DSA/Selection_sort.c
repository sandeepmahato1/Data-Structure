#include<stdio.h>
void selection_sort(int a[],int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
  {
     int min_index=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[min_index])
        {
            min_index=j;
        }

    }
    int temp=a[i];
    a[i]=a[min_index];
    a[min_index]=temp;
  }
}


int main()
{
    
  int a[]={2,96,25,14,3,65};
  int n=sizeof(a)/sizeof(a[0]);
  selection_sort(a,n);
  printf("selection sotr...");
  for(int i=0;i<n;i++)
  {
    printf("%d  ",a[i]);
  }
}