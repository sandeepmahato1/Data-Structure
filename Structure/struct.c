#include<stdio.h>

struct student
{
    char nm[20];
    int roll;
    int M;

};
int  main()
{
    int i;
   struct student m[3];
   for(i=1;i<=3;i++)
   {
    printf("\nenter %d name: ",i);
    scanf("%s",&m[i].nm);

    printf("\nenter %d roll no.: ",i);
    scanf("%s",&m[i].roll);

    printf("\nenter %d marks: ",i);
    scanf("%s",&m[i].M);

    printf("\nname=%s",m[i].nm);
    printf("\nroll no.=%d",m[i].roll);
    printf("\nmarks=%d",m[i].M);
   }
}


