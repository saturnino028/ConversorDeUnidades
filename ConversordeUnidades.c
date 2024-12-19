#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Funcoes.h"
#include <stdlib.h>

int main() {
    int continuar;
    int unidade;
    do
    {
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

    printf("Olá, usuário!\n");
    printf("Qual conversão você deseja fazer?\n");

    for (int i = 0; i < 9; i++) {
        printf("%s", Opcoes[i]);
    }

    printf("Digite o número correspondente à conversão desejada: ");
    if (scanf("%d", &unidade) != 1) {
        printf("Erro: Entrada inválida.\n");
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
            printf("Opção inválida.\n");
            break;
    }
    printf("Deseja realizar outra conversão? (1 - Sim, 0 - Não): ");
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
        printf("3 para METROS CÚBICOS - M3\n");
        printf("Digite a opção: ");
        if (scanf("%d", &opcao1) != 1) {
            printf("Entrada inválida.\n");
            return;
        }
        if (opcao1 < 1 || opcao1 > 3) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao1 < 1 || opcao1 > 3);

    do {
        printf("Para qual medida quer converter?\n");
        printf("1 para LITROS - L \n");
        printf("2 para MILILITROS - ML\n");
        printf("3 para METROS CÚBICOS - M3\n");
        printf("Digite a opção: ");
        if (scanf("%d", &opcao2) != 1) {
            printf("Entrada inválida.\n");
            return;
        }
        if (opcao2 < 1 || opcao2 > 3) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao2 < 1 || opcao2 > 3);

    if (opcao1 == opcao2) {
        printf("As unidades selecionadas são iguais. Nenhuma conversão necessária.\n");
        return;
    }

    do {
        printf("Digite o valor a ser convertido: ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada inválida.\n");
            return;
        }
        if (valor < 0) {
            printf("O valor não pode ser negativo! Tente novamente.\n");
        }
    } while (valor < 0);

    switch (opcao1) {
        case 1:  // Litros
            if (opcao2 == 2) { // Para mililitros
                printf("Resultado: %.2f ML\n", valor * 1000);
            } else if (opcao2 == 3) { // Para metros cúbicos
                printf("Resultado: %.2f M3\n", valor / 1000);
            }
            break;
        case 2:  // Mililitros
            if (opcao2 == 1) { // Para litros
                printf("Resultado: %.2f L\n", valor / 1000);
            } else if (opcao2 == 3) { // Para metros cúbicos
                printf("Resultado: %.2f M3\n", valor / 1000000);
            }
            break;
        case 3:  // Metros cúbicos
            if (opcao2 == 1) { // Para litros
                printf("Resultado: %.2f L\n", valor * 1000);
            } else if (opcao2 == 2) { // Para mililitros
                printf("Resultado: %.2f ML\n", valor * 1000000);
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
}

void tempo() {
}

void armazenamento() {
}
