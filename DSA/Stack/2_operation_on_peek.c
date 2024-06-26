#include<stdio.h>
#include<stdlib.h>  //use for malloc function

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        
         printf("Stack is overflow ! Cannot push %d to the stack\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack is overflow ! Cannot pop from the stack\n");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position");
    return -1;
    }
    
    else
    return sp->arr[sp->top-i+1] ;
}
int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
        sp->size=10;
        sp->top=-1;
        sp->arr=(int*)malloc(sp->size *sizeof(int));
        printf("Stack has been created successfully\n");

        printf("Before pushing isFull: %d\n",isFull(sp));
        printf("Before pushing isEmpty: %d\n",isEmpty(sp));
        push(sp,56);
        push(sp,26);
        push(sp,96);
        push(sp,56);
        push(sp,76);
        push(sp,14);
        push(sp,35);
        push(sp,78);
        push(sp,32);
        push(sp,56); //...Pushed 10 values onto stack.
        //push(sp,22);    //Stack overflow since the size of the stack is 10
        printf("After pushing isFull: %d\n",isFull(sp));
        printf("After pushing isEmpty: %d\n",isEmpty(sp));
        printf("Popped %d from the stack\n",pop(sp));
        printf("Popped %d from the stack\n",pop(sp));
        printf("Popped %d from the stack\n",pop(sp));


        for(int j=0; j<=sp->top+1; j++){
            printf("The value at position %d is %d\n",j,peek(sp,j));
        }
    return 0;
}