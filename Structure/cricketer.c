#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfMatch;
        float average;
    }cricketer;

    cricketer arr[3];

    for(int i=0;i<3;i++){
        gets(arr[i].name);//scanf("%s\n",&arr[i].name);
        scanf("%d\n",&arr[i].age);
        scanf("%d\n",&arr[i].noOfMatch);
        scanf("%f\n",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf("name: %s\n",arr[i].name);
        printf("age: %d\n",arr[i].age);
        printf("noOfMatch: %d\n",arr[i].noOfMatch);
        printf("avg: %f\n",arr[i].average);
        printf("\n");
    }


    return 0;
}