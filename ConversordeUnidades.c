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
        "0 - Sair\n"
        };

    printf("Ola, usuario!\n");
    printf("Qual conversao voce deseja fazer?\n");

    for(int i = 0; i<10; i++){
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
    int opcao;
    float valor, resultado;
    // Menu de opções
    printf("*********************************\n");
    printf("* 1 - Metro para centimetro     *\n");
    printf("* 2 - Metro para milimetro      *\n");
    printf("* 3 - Centimetro para metro     *\n");
    printf("* 4 - Centimetro para milimetro *\n");
    printf("* 5 - Milimetro para metro      *\n");
    printf("* 6 - Milimetro para centimetro *\n");
    printf("*********************************\n");

    // Solicita ao usuário para escolher a opção
    printf("\nEscolha a opcao desejada: ");
    scanf("%d", &opcao);

    // Solicita ao usuário o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Realiza a conversão com base na opção escolhida
    switch (opcao) {
        case 1:
            resultado = valor * 100;  // Metro para Centímetro
            printf("%.2f metros equivale a %.2f centimetros.\n", valor, resultado);
            break;
        case 2:
            resultado = valor * 1000;  // Metro para Milímetro
            printf("%.2f metros equivale a %.2f milimetros.\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 100;  // Centímetro para Metro
            printf("%.2f centimetros equivale a %.2f metros.\n", valor, resultado);
            break;
        case 4:
            resultado = valor * 10;  // Centímetro para Milímetro
            printf("%.2f centimetros equivale a %.2f milimetros.\n", valor, resultado);
            break;
        case 5:
            resultado = valor / 1000;  // Milímetro para Metro
            printf("%.2f milimetros equivale a %.2f metros.\n", valor, resultado);
            break;
        case 6:
            resultado = valor / 10;  // Milímetro para Centímetro
            printf("%.2f milimetros equivale a %.2f centimetros.\n", valor, resultado);
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
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
    int opcao;
    float area;

    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("1 - Centimetro Quadrado (cm²) > Metro Quadrado (m²)\n");
    printf("2 - Metro Quadrado (m²) > Centimetro Quadrado (cm²)\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nArea a ser convertida: ");
    scanf("%f", &area);

    switch (opcao)
    {
    case 1:
        printf("\nA area %lf cm² equivale a %lf m².\n", area, area / 10000);
        break;

    case 2:
        printf("\nA area %lf m² equivale a %lf cm².\n", area, area * 10000);
        break;

    default:
        printf("\nOpcao invalida.\n");
        break;
    }
}

void tempo(){

}

void armazenamento(){

}