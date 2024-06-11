//here are some pre defined function stdin and stdout in array.0
#include<stdio.h> 
int main()
{
    char ch[11];
    int i;
    printf("Input a text: ");
    for(i=0;i<11;i++)
    {
        ch[i]=getc(stdin);
    }
    printf("\nthe text inputed was: ");
    for(i=0;i<11;i++)
    {
        putc(ch[i],stdout);
    }
    return 0;
}