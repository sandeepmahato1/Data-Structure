#include<stdio.h>
typedef int* pointer;   //typedef is a c keyword which is used instead of datatype name;
int main(){
    int x=5,y=9;
    pointer a=&x,b=&y;
    printf("%x\n",a);
    printf("%x",b);
    return 0;
}