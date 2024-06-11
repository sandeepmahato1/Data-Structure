#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[20];
        int roll;
        int marks;
    };
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("\nEnter %d name: ",i+1);
        scanf("%s",&s[i].name);
        printf("\nEnter %d rollno.: ",i+1);
        scanf("%d",&s[i].roll);
        printf("\nEnter %d marks: ",i+1);
        scanf("%d",&s[i].marks);
    }

}