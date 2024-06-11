//WAP with passsing argument and return values.
#include<stdio.h>

// for return value we use int as a return type and add is a function name
int  add(int x,int y)//here x,y are formal arguments (the values of x and y is same as a and b)
{                    
    printf("\nsummation of two number is ");
     int s=x+y;
     printf("\nsum is %d",s);
    return x+y;//the value is return to sum by x+y
}
int main()
{
    int a,b,s;
    
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    int sum=add(a,b);//here a ,b are actual arguments and calling function add
    printf("\nsum is %d",sum);
    return 0;
}