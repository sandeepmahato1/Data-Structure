//How to check the two structure is same or not.
#include<stdio.h>
#include<stdbool.h> //use for bool line no.19
int main(){
    struct date{
        int day;
        int month;
        int year;
    }date1,date2;

    date1.day=2;
    date1.month=12;
    date1.year=2023;

    date2.day=6;
    date2.month=12;
    date2.year=2023;

    //we cannot compare struture of one with other only can compare by their individual element,but can copy element of one to other.
    bool flag=true;
    if(date1.day!=date2.day) flag=false;
    if(date1.month!=date2.month) flag=false;
    if(date1.year!=date2.year) flag=false;
    

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");
    return 0;
}