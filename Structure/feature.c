//How to copy a structure in a different structure.
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

    pokemon a,b,c;

    a.attack=100;
    a.hp=636;
    a.speed=52;
    a.tier='F';
    strcpy(a.name,"Blaston");   //a.name="Blaston"; This way this is wrong bcz of name is also an array of string.

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);

    b=a;   //deep copy  //The meaning of this line is to write above five line in a single line, thats is the beauty of structure.
    b.speed=5555;
    printf("speed:%d",b.speed);
    printf("\nb.attack:%d",b.attack);
    printf("\nhp:%d",b.hp);
    printf("\ntier:%c",b.tier);
    printf("\nname:%s",b.name);

    return 0;
}