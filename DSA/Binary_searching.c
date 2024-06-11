#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50},lr=0,up=4,mid,f=0,item;
    printf("Enter the element to be searched: ");
    scanf("%d",&item);

    while(lr<=up)
    {
        mid=(lr+up)/2;
        if(item==a[mid])
        {
            f=1;
            break;
        }
         else if(item<a[mid]){
        
            up=mid-1;
         }
        else{
            lr=mid+1;
        }
    }
    if(f==1)
    {
        printf("\nitem is found at %d",mid +1);
    }
    else{
        printf("\nelement is not found" );
    }
    return 0;
}