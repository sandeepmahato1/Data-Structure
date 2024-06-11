#include<stdio.h>
int main()
{
  int a=9;
  int *m;
  m=&a;
  printf("\na=%d",a);
  printf("\naddress of a=%x",&a);
  printf("\nvalue of m=%x",&m);
  printf("\nvalue of m=%d",*m);
}