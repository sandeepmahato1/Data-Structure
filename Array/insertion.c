//code for insertion an element in an array.
#include<stdio.h>

void display(int arr[],int n){
    //Traversal...
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void indInsertion(int arr[] ,int  size ,int element ,int capacity, int index){  
    if(size>=capacity){
        //return ;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    //return 1;

}
int main(){
    int arr[20]={1,5,89,5,7};
    int size=5,element=52,index=2;
    display(arr,size);
    indInsertion(arr, size, element,20, index);
    size++;
    display(arr,size);

    return 0;
}