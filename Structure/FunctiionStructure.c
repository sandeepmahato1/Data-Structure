//Function of structure is with pass by value.
#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>

//This structure only access in this main function if it write inside main function,if you want to accces it in global then write it outside the mani function.
typedef struct pokemon{ //Global declaration of structure.
        char name[10];
        int hp;
        int speed;
        int attack;
        char tier;
}pokemon;

void fun(pokemon p){
    printf("%d",p.hp);
    return;
}
void change(pokemon pikachu){
    pikachu.hp=140;
    pikachu.attack=60;
    pikachu.speed=100;
    return;
}

int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=50;
    pikachu.speed=100;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    return 0;
}