#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Funcoes.h"
#include <stdlib.h>

int main()
{
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
        "0 - Sair\n"};

    do
    {
        system("cls");
        printf("Ola, usuario!\n");
        printf("Qual conversao voce deseja fazer?\n");

        for (int i = 0; i < 10; i++)
        {
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
        while (continuar)
            ;

        printf("\nPrograma encerado!\n");

        return 0;
    }

    void comprimento()
    {
    }

    void massa()
    {
    }

    void volume()
    {
    }

    void temperatura()
    {
    }

    void velocidade()
    {
    }

    void energia()
    {
    }

    void area()
    {
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

    void tempo()
    {
    }

    void armazenamento()
    {
    }
