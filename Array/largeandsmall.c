//WAP to find the largest and smallest number in array.
#include<stdio.h>
int main()
{
  int i,a[5]={4,9,5,2};
  int small,large;
  small=large=a[0];
  for(i=1;i<=3;i++)
  {
    if(a[i]<small)
    {
        small=a[i];
    }
    else if(a[i]>large)
    {
        large=a[i];
    }
  }
  printf("smallest=%d,largest=%d",small,large);
}