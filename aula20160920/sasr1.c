#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chatbots ();

int main (){
    srand(time(0));
    char msg[256];
    printf("** Oi, quer conversar?\n");
    do{
        fgets(msg, sizeof(msg), stdin);
        chatbots();
    } while (strncmp(msg, "tchau", 5) != 0);
    printf("** Que pena, tchau!\n");
    return 0;
}
void chatbots(){
    int qualfala = rand()%7;
    switch(qualfala){
        case 0: printf("** Tudo bem?\n");
        break;
        case 1: printf("** Ok\n");
        break;
        case 2: printf("** LOL!?\n");
        break;
        case 3: printf("** Que legal\n");
        break;
        case 4: printf("** Que chato\n");
        break;
        case 5: printf("** Fale mais sobre isso\n");
        break;
        case 6: printf("** Sobre o que quer falar?\n");
        break;
    }
}
