//How to do nesting in structure.
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[10];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;  

    typedef struct legenDaryPokemon{
        pokemon normal;
        char ability[20];
    }legenDaryPokemon;

    typedef struct godpokemon{
        int specialAttack;
        legenDaryPokemon legend;
    }godpokemon;

    godpokemon arceus;
    arceus.specialAttack=300;
    arceus.legend.normal.attack=555;

    legenDaryPokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=100;
    mewtwo.normal.attack=562;
    mewtwo.normal.speed=423;
   // mewtwo.normal.tier="p";
    strcpy(mewtwo.normal.name,"Mewtwo");

    printf("Health: %d\n",mewtwo.normal.hp);
    printf("Attack: %d",mewtwo.normal.speed);
    return 0;
}