#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[20];
        float price;
        int pageNo;
    }a,b,c;

    strcpy(a.name,"Secrect seven");
    a.price=452.3;
    a.pageNo=456;

    strcpy(b.name,"Python");
    b.price=5002.3;
    b.pageNo=789;

    strcpy(c.name,"Java");
    b.price=950;
    c.pageNo=126;

    printf("Book name=%s\n",a.name);
    printf("Price of book=%f\n",a.price);
    printf("No. of pages=%d",a.pageNo);

    return 0;
}