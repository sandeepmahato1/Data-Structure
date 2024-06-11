//Programe to show there is zero initialize at time of declaration of array.
#include<stdio.h>
int main()
{
    int a[4]={1};
    printf("\n%d",a[0]);
    printf("\n%d",a[1]);
    printf("\n%d",a[2]);
    printf("\n%d",a[3]);
    return 0;
}