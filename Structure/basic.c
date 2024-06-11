#include<stdio.h>
int main(){
    struct student{
    char class;
    int roll;
    int mark;
    }sandeep,abhi;  //another formate of writting data member.

    //struct student sandeep;
    sandeep.class='A';
    sandeep.roll=52;
    scanf("%d",&sandeep.mark);
    //sandeep.mark=96;
    printf("Class = %c\n",sandeep.class);
    printf("sandeep mark=%d\n",sandeep.mark);

    //struct student abhi;
    abhi.class='B';
    abhi.roll=02;
    abhi.mark=86;
    printf("Class = %c\n",abhi.class);


    return 0;
}