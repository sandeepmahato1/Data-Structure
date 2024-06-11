#include<stdio.h>
#include<string.h>
int main()
{
   char nm[20];
   int i,j;
   puts("enter a string");
   gets(nm);
   puts("the size of string is ");
   int size=0;
   int k=0;
   while ((nm[k])!='\0')
   {
    size++;
    k++;
   }
   for(i=0,j=size-1;i<=j;i++,j--)
   {
    char temp=nm[i];
    nm[i]=nm[j];
    nm[j]=temp;
   }
   puts("the reverse string is ");
   puts(nm);
    return 0;
}