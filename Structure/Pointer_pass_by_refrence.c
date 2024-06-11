
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


typedef struct pokemon{ 
        int hp;
        int speed;
        int attack;
        char tier;
        char name[10];
}pokemon;
void change(pokemon* p){    //like change(int* p){}
    p->hp=40;   //p->hp=40 is equivalent to (*p).hp=40
    p->speed=45;
    p->attack=70;
    p->tier='B';
    strcpy(p->name,"Richu");
     return;
}

int main(){
    pokemon pikachu={30,56,89,'A',"Pikachu"};
    // pikachu.hp=30;
    // pikachu.speed=56;
    // pikachu.attack=89;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"Pikachu");
    //int* x-> address of integer value
    //pokemon* x=&pikachu;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);    
    printf("%s\n",pikachu.name);    
   
    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
     printf("%c\n",pikachu.tier);    
    printf("%s\n",pikachu.name);    
   
    return 0;
}