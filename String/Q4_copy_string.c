#include<stdio.h>
#include<string.h>
int main()
{
    //char s1[12]="hello sandy";
    // char *s2=s1;
    // s1[0]='m';  //here "h" is change to "m" //shallow copy
    // puts(s1);   

    //deep copy

    // char s2[12];    //for strcpy must declare the size of the string.
    // strcpy(s2,s1);  //copy the string of s1 to s2
    // puts(s2);

    // char s2[12]="hi pompy";
    // strcat(s2,s1);
    // puts(s2);

    char  str[20]="college";
    puts(str);
    for(int i=6;i>=3;i--)
    {
        str[i+1]=str[i];
    }
    str[2]='k';
    puts(str);

    return 0;
    

}