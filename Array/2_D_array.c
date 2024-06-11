#include<stdio.h>
int main()
{
    int a[2][2],i,j,b[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter %d row and %d column: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",a[i][j]);
            
            
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    printf("\nTranspose of matrix:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        
    }

    

}