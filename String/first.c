#include<stdio.h>
#include<string.h>
int main()
{
    char a[5];
    printf("\nenter any value:");
    scanf("%s",&a);

    printf("\nname =%s",a);
    int i;
    i=strlen(a);
    printf("\nlength of %s=%d",a,i);
     //char str[]="hello sandeep";
    //gets(s);    //used for taken input of string .
    //puts(s);    //used for output of the total input string, if we use printf then only first word is print after find space it will be stop.
    //puts(str);  //
}