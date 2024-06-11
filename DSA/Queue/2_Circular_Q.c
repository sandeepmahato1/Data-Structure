#include<stdio.h>
#include<stdlib.h>
struct circularQueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q){
    if(q->f ==q->r){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct circularQueue *q) {
    if((q->r+1)%q->size==q->f) {
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct circularQueue * q,int val) {
    if(isFull(q)){
        printf("The queue is full\n");
    }else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}
int main(){
    struct  circularQueue q;
    q.size=5;
    q.f = q.r = 0;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    
    //enqueue few elements
    enqueue(&q,45);
    enqueue(&q,67);
    enqueue(&q,32);
    enqueue(&q,98);
    enqueue(&q,12);
    
    //dequeue some elements
    printf("The dequeue element is: %d\n",dequeue(&q));//should print 45
    printf("The dequeue element is: %d\n",dequeue(&q));//should print 67
    printf("The dequeue element is: %d\n",dequeue(&q));
    printf("The dequeue element is: %d\n",dequeue(&q));
    enqueue(&q,67);

    //checking isFull and isEmpty condition after enqueue and dequeue
    if(isFull( &q)){
        printf("The queue is full\n");
    }
    if(isEmpty(&q)){
        printf("The queue is empty");
    }

    return 0;
}