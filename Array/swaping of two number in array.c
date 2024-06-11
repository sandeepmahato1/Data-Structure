//WAP to print the swaping of two number in an array by using function.
#include<stdio.h>
void fun(int x[])
{
 int temp=x[0];
 x[0]=x[1];
 x[1]=temp;
 printf("\n%d %d",x[0],x[1]);
 
}
int main()
{
 int a[2]={4,3};
 //for(i=0;i<3;i++){
 printf("\n%d %d",a[0],a[1]);
 fun(a);
 printf("\n%d",a[1]);
}




