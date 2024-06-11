//important program for stack
#include<stdio.h>
void pip(int n)
{
    if(n==0)
    return ;
    printf("pre %d\n",n);
    pip(n-1);
    printf("In %d\n",n);
    pip(n-1);
    printf("post %d\n",n);
    return;
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    pip(n);
    return 0;
}