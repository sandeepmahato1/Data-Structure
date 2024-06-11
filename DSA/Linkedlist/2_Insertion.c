#include <stdio.h>
#include <stdlib.h>
 
struct Node     //a structure
{
    int data;
    struct Node *next;  //points to the next node in the list
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//case 1
struct Node *insertAtFirst(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    int i = 1;

    while (i!=index-1)
    {
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ptr->data = data;
    temp->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
/*struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}*/

int main()
{
    struct Node *head;          //points to the head node of list 
    struct Node *second;        //points to the second node of list
    struct Node *third;         //points to the third node of list
    struct Node *fourth;        //points to the fourth node of list
 
    // Allocate memory for nodes in the linked list in Heap and all are in dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7; //assign the value in head of data as 7
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    printf("\nlinked list before insertion\n");
    linkedListTraversal(head);  //passing argument as head  in linkedListTraversal
   
     //head=insertAtIndex(head,87,2);
    // head=insertAtFirst(head,99);
    head= insertAtEnd(head,89);
   // head=insertAfterNode(head,third,34);

    printf("\nlinked list after insertion\n");
    linkedListTraversal(head);
    
    return 0;
}
