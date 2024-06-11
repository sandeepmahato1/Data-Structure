#include<stdio.h>

void america()
{
    printf("\nI  am in america");
    return; //there is nothing to return 
}
void england()
{
    void america();//function prototype of america 
    printf("\nI am in england");
    america(); //calling america
    return;
}



int main()
{
    void india();//function prototype of india ,we can call funtion india over the main or below the main function
    india();//calling india 
    return 0;
}
void india()
{
    void england();//function prototype of england
    printf("\nhi pari rani mahato");
    england(); //calling england
    printf("\nhello vivek");
    return ;
}
