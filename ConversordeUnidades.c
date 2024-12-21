#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Funcoes.h"
#include <stdlib.h>

int main() {
    int continuar;
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

    do{
        system("cls");
        printf("Ola, usuario!\n");
        printf("Qual conversao voce deseja fazer?\n");

        for(int i = 0; i<10; i++){
            printf("%s", Opcoes[i]);
        }

        printf("Digite o numero correspondente a conversao desejada: ");
        if (scanf("%d", &unidade) != 1) {
            printf("Erro: Entrada invalida.\n");
            return 1;
        }

        switch (unidade) {
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
                printf("Opcao invalida.\n");
                break;
        }
        printf("Deseja realizar outra conversao? (1 - Sim, 0 - Nao): ");
        scanf("%d", &continuar);

    }
    while(continuar);
    
    printf("\nPrograma encerado!\n");

    return 0;
}

void comprimento() {
}

void massa(){

}

void volume(){

}

void temperatura(){
    int opcaoOrigem, opcaoDestino;
    float temp;
    printf ("\nConversor de temperatura\n");
    printf ("Digite a temperatura:\n");
    scanf ("%.2f", &temp);

    printf ("Essa temperatura esta em qual unidade?\n");
    printf ("1 - Celsius\n");
    printf ("2 - Fahrenheit\n");
    printf ("3 - Kelvin\n");
    scanf ("%d", &opcaoOrigem);

    printf ("Agora, escolha para qual tipo de temperatura voce deseja converter: \n");
    printf ("1 - Celsius\n");
    printf ("2 - Fahrenheit\n");
    printf ("3 - Kelvin\n");
    scanf ("%d", &opcaoDestino);

    switch (opcaoOrigem)
    {
    case 1:
        switch (opcaoDestino){
            case 1: //Celsius para Celsius
            printf("A conversao de Celsius para Celsius eh:\n %.2f\n", temp);
            break;

            case 2: //Celsius para Fahrenheit
            temp = (temp * 1.8) + 32;
            printf("A conversao de Celsius para Fahrenheit eh:\n %.2f\n", temp);
            break;

            case 3: //Celsius para Kelvin
            temp = temp + 273.15;
            printf("A conversao de Celsius para Kelvin eh:\n %.2f\n", temp);
            break;

            default:
            printf("Opçao invalida");
            break;
        }
        break;

    case 2:
        switch (opcaoDestino){
            case 1: //Fahrenheit para Celsius
            temp = (temp - 32) * 5/9;
            printf("A conversao de Fahrenheit para Celsius eh:\n %.2f\n", temp);

            case 2: //Fahrenheit para Fahrenheit
            printf("A conversao de Fahrenheit para Fahrenheit eh:\n %.2f\n", temp);
            break;

            case 3: //Fahrenheit para Kelvin
            temp = (temp - 32) * 5/9 + 273.15;
            printf("A conversao de Fahrenheit para Kelvin eh:\n %.2f\n", temp);
            break;

            default:
            printf("Opçao invalida");
            break;
        }
    break;  

    case 3:
        switch (opcaoDestino){
            case 1: //Kelvin para Celsius
            temp = temp - 273.15;
            printf("A conversao de Kelvin para Celsius eh:\n %.2f\n", temp);
            break;

            case 2: //Kelvin para Fahrenheit
            temp = (temp - 273.15) * 1.8 + 32;
            printf("A conversao de Kelvin para Fahrenheit eh:\n %.2f\n", temp);
            break;

            case 3: //Kelvin para Kelvin
            printf("A conversao de Kelvin para Kelvin eh:\n %.2f\n", temp);
            break;

            default:
            printf("Opçao invalida");
            break;
        }
    break;
    
    default:
        printf("Opçao invalida");
        break;
    }
}

void velocidade(){

}

void energia() {
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

void tempo() {
}

void armazenamento() {
}
