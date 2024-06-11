//WAP to print the string in alphabatical order
#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,n;
  char text[20];
  printf("enter the word: ");
  gets(text);
  printf("\nthe sorted string is...");
  n=strlen(text);
  n--;
  for(i=0;i<n;i++)
  {
   for(j=1+i;j<n;j++)
   {
      if(text[i]>text[j]){
       int temp=text[i];
       text[i]=text[j];
       text[j]=temp;
      }
   }
  }
 printf(" %s",text);


}