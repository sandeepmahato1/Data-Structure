
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

int main(){
    pokemon pikachu;
    pikachu.hp=30;
    pikachu.speed=56;
    pikachu.attack=89;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    //int* x-> address of integer value
    pokemon* x=&pikachu;
    printf("%x\n",&pikachu.hp);
    printf("%x\n",&pikachu.speed);
    printf("%x\n",&pikachu.attack);
    printf("%x\n",&pikachu.tier);
    printf("%x\n",&pikachu.name);
    printf("%x",x);
    return 0;
}