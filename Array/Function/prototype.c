#include<stdio.h>
int main()
{
    void fun();// this line is called function prototype because now we call function fun() in above or below the main function
    fun();
    return 0;
}
void fun()
{
    printf("hello vivek");
}