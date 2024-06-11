#include<stdio.h>
#define N 5
int top=N-1;
int stack[N]={4,5,6,9,89};

void push(){
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(top==N){
        printf("Underflow condition");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top==-1) {
        printf("underflow Condition\n");
     }else{
            item=stack[top];
            top--;
        }
}
int main(){
   
    push();     //#push operation
    pop();  //#pop operation

    for(int i=top;i>=0;i--){
        printf("\n%d ",stack[i]);
    }
    return 0;
}