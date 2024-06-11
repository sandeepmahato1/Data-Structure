//Write a programe to print the sum of array
#include<stdio.h>
int main()
{
    int a[3];
    int sum=0, i;
    float avg;
    printf("Input the number of element to be stored in array:3");
    
    printf("\nInput three element in array:");

    for(i=0;i<=2; i++)
    {
       printf("\nelement %d: ",i);
       scanf("%d",&a[i]); 

    }
    for(i=0;i<=2;i++){
    
    sum=sum+a[i];
    }
    avg=sum/3;
    printf("\nSum of all element stored in array: %d",sum);
     printf("\naverage=%f",avg);


}    