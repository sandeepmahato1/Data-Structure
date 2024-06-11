#include<stdio.h>
# define max 20
void main(){
    int A[max],i,j;
    int pos,size,item;
    printf("enter the number of element in array: ");
    scanf("%d ",&size);
    if(size>max){
        printf("the maximum size is 20");
        return;
    }
    printf("enter the element of array in sorted array");
    for(i=0;i<size ;i++)
    scanf("%d ",&A[i]);
    printf("enter the element to be inserted: ");
    scanf("%d ",&item);
    if(size ==max){
        printf("array is full");
        return;
    }
    for(i=0;i<size;i++){
        if(item<A[i]){
            pos=i;
            break;
        }
    }

    if(i==size)
    pos=size;

    for(j=size;j>pos;j--)
    A[j]=A[j-1];
    A[j]=item;
    size++;

    printf("array after insertion");
    for(i=0;i<size;i++)
    printf("%d ",A[i]);
    
}