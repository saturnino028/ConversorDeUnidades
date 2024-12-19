#include <stdlib.h>
#include <stdio.h>
#include "Funcoes.h"

float Litro()
{
    float valor;
    int op;

    do
    {
        printf("Para qual unidade deseja converter? \n");
        printf("1 para MILILITROS - ML\n");
        printf("2 para METRO CUBICO - M3\n");
        scanf("%d", &op);
    } while (op < 1 || op > 2);

    do
    {
        printf("Digite o valor em litros: ");
        scanf("%f", &valor);
    } while (valor < 0);

    if (op == 1)
        return valor * 1000;
    else
        return valor / 1000;
}

float Mililitro()
{
    float valor;
    int op;
    do
    {
        printf("Para qual unidade deseja converter? \n");
        printf("1 para LITROS - L\n");
        printf("2 para METRO CUBICO - M3\n");
        scanf("%d", &op);
    } while (op < 1 || op > 2);

    do
    {
        printf("Digite o valor em mililitros: ");
        scanf("%f", &valor);
    } while (valor < 0);

    if (op == 1)
        return valor / 1000;
    else
        return valor / 1000000;
}

float M3()
{
    float valor;
    int op;
    do
    {
        printf("Para qual unidade deseja converter? \n");
        printf("1 para LITROS - L\n");
        printf("2 para MILILITRO - ML\n");
        scanf("%d", &op); // Adicionado para capturar a entrada
    } while (op < 1 || op > 2);

    do
    {
        printf("Digite o valor em metros cubicos: ");
        scanf("%f", &valor);
    } while (valor < 0);

    if (op == 1)
        return valor * 1000;
    else
        return valor * 1000000;
}

void volume()
{
    int opcao;

    do
    {
        printf("De qual medida quer converter?\n");
        printf("1 para LITROS - L \n");
        printf("2 para MILILITRO - ML\n");
        printf("3 para METRO CUBICO - M3\n");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 3);

    switch (opcao)
    {
    case 1:
        printf("Resultado: %.2f\n", Litro());
        break;
    case 2:
        printf("Resultado: %.2f\n", Mililitro());
        break;
    case 3:
        printf("Resultado: %.2f\n", M3());
        break;
    default:
        break;
    }
}

int main()
{
    int continuar;
    do
    {
        volume();
        printf("Deseja realizar outra conversão? (1 - Sim, 0 - Não): ");
        scanf("%d", &continuar);
    } while (continuar);

    return 0;
}
