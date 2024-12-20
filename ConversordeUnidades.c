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
        "9 - Área\n",
    };
    do
    {
        system("cls");
        printf("Ola, usuario!\n");
        printf("Qual conversao voce deseja fazer?\n");

        for (int i = 0; i < 9; i++) {
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

    }while(continuar);
    
    printf("\nPrograma encerado!\n");

    return 0;
}

void comprimento() {
}

void massa() {
}

void volume() {
    int opcao1, opcao2;
    float valor;

    do {
        printf("De qual medida quer converter?\n");
        printf("1 para LITROS - L \n");
        printf("2 para MILILITROS - ML\n");
        printf("3 para METROS CUBICOS - M3\n");
        printf("Digite a opcao: ");
        if (scanf("%d", &opcao1) != 1) {
            printf("Entrada invalida.\n");
            return;
        }
        if (opcao1 < 1 || opcao1 > 3) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao1 < 1 || opcao1 > 3);

    do {
        printf("Para qual medida quer converter?\n");
        printf("1 para LITROS - L \n");
        printf("2 para MILILITROS - ML\n");
        printf("3 para METROS CUBICOS - M3\n");
        printf("Digite a opcao: ");
        if (scanf("%d", &opcao2) != 1) {
            printf("Entrada invalida.\n");
            return;
        }
        if (opcao2 < 1 || opcao2 > 3) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao2 < 1 || opcao2 > 3);

    if (opcao1 == opcao2) {
        printf("As unidades selecionadas sao iguais. Nenhuma conversao necessaria.\n");
        return;
    }

    do {
        printf("Digite o valor a ser convertido: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida.\n");
            return;
        }
        if (valor < 0) {
            printf("O valor nao pode ser negativo! Tente novamente.\n");
        }
    } while (valor < 0);

    switch (opcao1) {
        case 1:  // Litros
            if (opcao2 == 2) { // Para mililitros
                printf("%.2f L convertido para mililitros resulta em %.2f ML\n", valor, valor * 1000);
            } else if (opcao2 == 3) { // Para metros cúbicos
                printf("%.2f L convertido para metros cúbicos resulta em %.2f M3\n", valor, valor / 1000);
            }
            break;
        case 2:  // Mililitros
            if (opcao2 == 1) { // Para litros
                printf("%.2f ML convertido para litros resulta em %.2f L\n", valor, valor / 1000);
            } else if (opcao2 == 3) { // Para metros cúbicos
                printf("%.2f ML convertido para metros cúbicos resulta em %.2f M3\n", valor, valor / 1000000);
            }
            break;
        case 3:  // Metros cúbicos
            if (opcao2 == 1) { // Para litros
                printf("%.2f M3 convertido para litros resulta em %.2f L\n", valor, valor * 1000);
            } else if (opcao2 == 2) { // Para mililitros
                printf("%.2f M3 convertido para mililitros resulta em %.2f ML\n", valor, valor * 1000000);
            }
            break;
    }
}

void temperatura() {
}

void velocidade() {
}

void energia() {
}

void area() {
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
