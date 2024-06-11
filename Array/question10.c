//programe to print the size and memory location of element of array.
#include<stdio.h>
int main()
{
    int a[5]={3,4,2,1};
    float m[1]={4.3};
    char n[7]={'a','b','c','d','f'};
    for(int i=0;i<5;i++)
    {
        printf("\n size is %d",sizeof(a[i]));
        printf("\n%p",&a[i]);
    }
    printf("\n%d",sizeof(m[0]));
    printf("\n%d",sizeof(n[0]));
    int i=0;
    while(n[i]!='\0')
    {
        printf("\n%c and memory location is %p",n[i],&n[i]);
        i++;
    }
    return 0;
}