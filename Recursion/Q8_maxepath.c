#include<stdio.h>
int maze(int cr,int cc,int er,int ec )  //cr-current row,cc-current column,ec-ending column,er-ending row
{
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec)
    {
        return 1;
    }
    if(cr==er)  //only rightways call
    {
        rightways +=maze(cr,cc+1,er,ec);
    }
    if(cc==ec)  //only downways call
    {
        downways +=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec)
    {
        rightways +=maze(cr,cc+1,er,ec);
        downways +=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;

}
int main()
{
    int m,n;
    printf("enter the rows of the maze: ");
    scanf("%d",&n);
    printf("enter the column  of the maze: ");
    scanf("%d",&m);
    int ways=maze(1,1,n,m);
    printf("%d",ways);
    return 0;
}