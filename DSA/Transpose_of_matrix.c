#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\nenter the %d and %d element",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\nThe matrix is ....\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
        
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("\nthe transpose is ...\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {     
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }    

}