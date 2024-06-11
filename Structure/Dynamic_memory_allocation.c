#include<stdio.h>
#include<malloc.h>
struct student{
    char nm[20];
    int roll;
    int marks;
};

int main(){
    struct student* s;  //create a pointer of s from where we can access student
    s=(struct student*)malloc(sizeof(struct student));  //it create a dynamic memory in heap 
    printf("\nenter name: ");
    scanf("%s",&s->nm);
    printf("\nenter rollno.: ");
    scanf("%d",&s->roll);
    printf("\nenter marks: ");
    scanf("%d",&s->marks);

    
    printf("\nName=%s",s->nm);
    printf("\nRoll=%d",s->roll);
    printf("\nMarks=%d",s->marks);

}