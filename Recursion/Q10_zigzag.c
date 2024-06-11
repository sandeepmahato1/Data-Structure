// //important program for stack
// #include<stdio.h>
// void zigzag(int n)
// {
//     if(n==0)
//     return ;
//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     zigzag(n);
//     return 0;
// }


#include<stdint.h>
// void fun();

void fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d\t",n);
        fun(n-1);
    }
}
int main(){
    fun(2);
    return 0;
}

