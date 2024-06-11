#include<stdio.h>
int main()
{
    //char a[]={'a','b','c','d','f','\0'};
    char a[]="hello sandeep";   //set of cahracter is called string which is in double quotes.
    int i=0;
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n%p",&a);
     printf("\n%d",sizeof(a));  //size of string is always +1 greater than the character string.//14
    return 0;
}