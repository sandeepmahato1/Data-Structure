#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[10];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;   //here pokemeon is a variable

    pokemon arr[3];    //arr[0],arr[1],arr[2]

    strcpy(arr[0].name,"Pikachu");
    arr[0].hp=102;
    arr[0].speed=457;
    arr[0].attack=52;
    arr[0].tier='A';

    strcpy(arr[1].name,"Oliver");
    arr[1].hp=502;
    arr[1].speed=527;
    arr[1].attack=96;
    arr[1].tier='L';

    strcpy(arr[2].name,"Ozard");
    arr[2].hp=102;
    arr[2].speed=400;
    arr[2].attack=12;
    arr[2].tier='M';

    for(int i=0;i<3;i++){
        printf("name: %s\n",arr[i].name);
        printf("Health: %d\n",arr[i].hp);
        printf("attack: %d\n",arr[i].attack);
        printf("Tier: %c\n",arr[i].tier);
         printf("speed: %d\n",arr[i].speed);
    }
    return 0;
}