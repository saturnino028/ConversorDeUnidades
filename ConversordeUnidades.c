#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Funcoes.h"
#include <stdlib.h>
#include <math.h>

int main() {
    int continuar;
    int unidade;
    
    const char *Opcoes[] = 
    {
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

void armazenamento() 
{
    float valor;
    int unidade;
    float bits, bytes, kb, mb, gb, tb;

    // Coleta de dados do usuário
    printf("Escolha a unidade inicial:\n");
    printf("1. Bits\n2. Bytes\n3. Kilobytes (KB)\n4. Megabytes (MB)\n5. Gigabytes (GB)\n6. Terabytes (TB)\n");
    printf("Digite a unidade (1-6): ");
    scanf("%d", &unidade);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Switch para escolher a unidade de origem
    switch (unidade) {
        case 1: // Bits
            bits = valor;
            break;
        case 2: // Bytes
            bits = valor * 8;
            break;
        case 3: // Kilobytes (KB)
            bits = valor * 8 * 1024;
            break;
        case 4: // Megabytes (MB)
            bits = valor * 8 * pow(1024, 2);
            break;
        case 5: // Gigabytes (GB)
            bits = valor * 8 * pow(1024, 3);
            break;
        case 6: // Terabytes (TB)
            bits = valor * 8 * pow(1024, 4);
            break;
        default:
            printf("\nUnidade invalida!\n");
            return;
    }

    // Realizando as conversões para outras unidades
    bytes = bits / 8;
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    tb = gb / 1024;

    // Exibindo os resultados
    printf("\n--- Valores convertidos:\n");
    printf("Bits: %.2f\n", bits);
    printf("Bytes: %.2f\n", bytes);
    printf("Kilobytes (KB): %.2f\n", kb);
    printf("Megabytes (MB): %.2f\n", mb);
    printf("Gigabytes (GB): %.2f\n", gb);
    printf("Terabytes (TB): %.2f\n", tb);
}

void temperatura()
{
    int opcaoOrigem, opcaoDestino;
    float temp;
    printf ("\nConversor de temperatura\n");
    printf ("Digite a temperatura:\n");
    scanf ("%f", &temp);

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

void comprimento(){
    int opcao;
    float valor, resultado;

    // Solicita ao usuário o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

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

void velocidade(){

}

void energia() {
     int unidade;
     float valor;
     

        printf("|Escolha o tipo de unidade:|\n");
        printf("|1 - W                     |\n");
        printf("|2 - KW                    | \n");
        printf("|3 - CV                    | \n");
        scanf("%d", &unidade);

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);
       


        if (unidade == 1) {
            printf("Conversao de Watts para Quilowatts: \n");
            printf("%.2f W = %.2f kW\n \n", valor, (valor / 1000));
            printf("Conversao de Watts para Cavalos-Vapor: \n");
            printf("%.2f W = %.2f cv\n \n", valor, (valor / 735.5));
        } else if (unidade == 2) {
            printf("Conversao de Quilowatts para Watts: \n");
            printf("%.2f kW = %.2f W\n \n", valor, (valor * 1000));
            printf("Conversao de QuiloWatts para Cavalos-Vapor: \n");
            printf("%.2f kW = %.2f cv\n \n", valor, (valor * 1.36));
        } else if (unidade == 3) {
            printf("Conversao de Cavalos-Vapor para Watts: \n");
            printf("%.2f cv = %.2f W\n \n", valor, (valor * 735.5));
            printf("Conversao de Cavalos-vapor para QuiloWatts: \n");
            printf("%.2f cv = %.2f kW\n \n", valor, (valor / 1.36));
        } else {
            printf("Unidade inválida!\n");
        }
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
                printf("%.2f L convertido para metros cubicos resulta em %.2f M3\n", valor, valor / 1000);
            }
            break;
        case 2:  // Mililitros
            if (opcao2 == 1) { // Para litros
                printf("%.2f ML convertido para litros resulta em %.2f L\n", valor, valor / 1000);
            } else if (opcao2 == 3) { // Para metros cúbicos
                printf("%.2f ML convertido para metros cubicos resulta em %.2f M3\n", valor, valor / 1000000);
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

void tempo()
{
    float valorEntrada, valorSaida;
    char unidadeEntrada, unidadeSaida;

    printf("CONVERSOR DE TEMPO\n");
    printf("Escolha a unidade de entrada:\ns - Segundo\nm - Minuto\nh - Hora\n");
    scanf(" %c", &unidadeEntrada);

    printf("Digite o valor em %c: ", unidadeEntrada);
    scanf("%f", &valorEntrada);

    printf("Escolha a unidade de saída:\ns - Segundo\nm - Minuto\nh - Hora\n");
    scanf(" %c", &unidadeSaida);

    // Converter a entrada para segundos
    if (unidadeEntrada == 'h')
    {
        valorEntrada *= 3600;
    }
    else if (unidadeEntrada == 'm')
    {
        valorEntrada *= 60;
    }

    // Converter de segundos para a unidade de saída
    if (unidadeSaida == 'h')
    {
        valorSaida = valorEntrada / 3600;
    }
    else if (unidadeSaida == 'm')
    {
        valorSaida = valorEntrada / 60;
    }
    else
    {
        valorSaida = valorEntrada;
    }

    printf("Tempo convertido: %.2f %c\n", valorSaida, unidadeSaida);
}

void massa(){
    int opcaoOrigem, opcaoDestino;
    float peso;
    printf("\nConversor de massa\n");
    printf("Digite o peso:\n");
    scanf("%f", &peso);

    printf("Esse peso esta em qual unidade?\n");
    printf("1 - Quilograma (kg)\n");
    printf("2 - Grama (g)\n");
    printf("3 - Tonelada (t)\n");
    scanf("%d", &opcaoOrigem);

    printf("Agora, escolha para qual tipo de unidade voce deseja converter:\n");
    printf("1 - Quilograma (kg)\n");
    printf("2 - Grama (g)\n");
    printf("3 - Tonelada (t)\n");
    scanf("%d", &opcaoDestino);

    switch (opcaoOrigem) {
        case 1: // Quilograma
            switch (opcaoDestino) {
                case 1: // Quilograma para Quilograma
                    printf("A conversao de Quilograma(kg) para Quilograma(kg) eh:\n %.2f kg\n", peso);
                    break;
                case 2: // Quilograma para Grama
                    peso = peso * 1000;
                    printf("A conversao de Quilograma(kg) para Grama(g) eh:\n %.2f g\n", peso);
                    break;
                case 3: // Quilograma para Tonelada
                    peso = peso / 1000;
                    printf("A conversao de Quilograma(kg) para Tonelada(t) eh:\n %.2f t\n", peso);
                    break;
                default:
                    printf("Opcao invalida\n");
                    break;
            }
            break;

        case 2: // Grama
            switch (opcaoDestino) {
                case 1: // Grama para Quilograma
                    peso = peso / 1000;
                    printf("A conversao de Grama(g) para Quilograma(kg) eh:\n %.2f kg\n", peso);
                    break;
                case 2: // Grama para Grama
                    printf("A conversao de Grama(g) para Grama(g) eh:\n %.2f g\n", peso);
                    break;
                case 3: // Grama para Tonelada
                    peso = peso / 1e6;
                    printf("A conversao de Grama(g) para Tonelada(t) eh:\n %.4f t\n", peso);
                    break;
                default:
                    printf("Opcao invalida\n");
                    break;
            }
            break;

        case 3: // Tonelada
            switch (opcaoDestino) {
                case 1: // Tonelada para Quilograma
                    peso = peso * 1000;
                    printf("A conversao de Tonelada(t) para Quilograma(kg) eh:\n %.2f kg\n", peso);
                    break;
                case 2: // Tonelada para Grama
                    peso = peso * 1e6;
                    printf("A conversao de Tonelada(t) para Grama(g) eh:\n %.2f g\n", peso);
                    break;
                case 3: // Tonelada para Tonelada
                    printf("A conversao de Tonelada(t) para Tonelada(t) eh:\n %.2f t\n", peso);
                    break;
                default:
                    printf("Opcao invalida\n");
                    break;
            }
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }
}

void area(){
    int opcao;
    float area;

    printf("\nEscolha uma das opcoes abaixo:\n");
    printf("1 - Centimetro Quadrado (cm2) > Metro Quadrado (m2)\n");
    printf("2 - Metro Quadrado (m2) > Centimetro Quadrado (cm2)\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nArea a ser convertida: ");
    scanf("%f", &area);

    switch (opcao)
    {
    case 1:
        printf("\nA area %.2f cm2 equivale a %.2f m2.\n", area, area / 10000);
        break;

    case 2:
        printf("\nA area %.2f m2 equivale a %.2f cm2.\n", area, area * 10000);
        break;

    default:
        printf("\nOpcao invalida.\n");
        break;
    }
}