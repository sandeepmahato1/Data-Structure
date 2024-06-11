#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("value of x is %d",*x);
    printf("\nvalue of y is %d",* y);
    return;
}
int main()
{
    int a=3;
    int b=5;
    swap(&a,&b);
    printf("\nvalue of x is %d",a);
    printf("\nvalue of y is %d",b);
}