#include<stdio.h>
int main()
{
    int a=9;
    int* x=&a;
    int**y=&x;
    printf("\n%d",a);
    printf("\n%u",&a);
    printf("\n%x",x);
    printf("\n%p",*y);
    return 0;
}