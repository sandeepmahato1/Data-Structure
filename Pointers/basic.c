//WAP to store the address of a variable.
#include<stdio.h>
int main()
{
    int a=9;
    int* x;
    x=&a;
    printf("value of a %p",&a); //address of a.
    printf("\nvalue of x %p",x);  //address of *x that is the address of a.
    printf("\n%p",&x); //address of simple x
    printf("\n%d",*x); //integer value of *x that is the value of a.
}