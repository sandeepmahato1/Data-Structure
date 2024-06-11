#include<stdio.h>
int main()
{
    char str[]="college wallah";
    char* ptr=str;
    int i=0;
    while(*ptr!='\0')
    {
        ptr++;
        i++;
    }
    puts(str);
}