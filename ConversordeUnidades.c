#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Funcoes.h"

int main(){
    int unidade;
    const char *Opcoes[] = {
        "1 - Armazenamento\n",
        "2 - Temperatura\n",
        "3 - Comprimento\n",
        "4 - Velocidade\n",
        "5 - Energia\n",
        "6 - Volume\n",
        "7 - Tempo\n",
        "8 - Massa\n",
        "9 - Area\n",
        };

    printf("Ola, usuario!\n");
    printf("Qual conversao voce deseja fazer?\n");

    for(int i = 0; i<9; i++){
        printf("%s", Opcoes[i]);
    }

    printf("Digite:\n");
    scanf("%d", &unidade);
    
    switch (unidade)
    {
    case 1:
        armazenamento();
        break;
    case 2:
        temperatura();
        break;
    case 3:
        comprimento();
        break;
    case 4:
        velocidade();
        break;
    case 5:
        energia();
        break;
    case 6:
        volume();
        break;
    case 7:
        tempo();
        break;
    case 8:
        massa();
        break;
    case 9:
        area();
        break;
    
    default:
        break;
    }
}

void comprimento(){

}

void massa(){

}

void volume(){

}

void temperatura(){

}

void velocidade(){

}

void energia(){

}

void area(){

}

void tempo(){

}

void armazenamento(){

}