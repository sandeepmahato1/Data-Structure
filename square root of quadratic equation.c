//WAP to calculate the square root of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,r3,d;
    printf("\n enter the values of a,b,c" );
    scanf("%f%f%f",&a,&b,&c);
    //


    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+ sqrt(d))/2*a;
        r2=(-b- sqrt(d))/2*a;
        printf("%f %f are equal roots",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/2*a;
        printf("%f=%f roots are equal",r1,r2);
    }
    else{
        r3=sqrt(-d)/2*a;
        printf("%f roots is imaginary",r3);
    }

}