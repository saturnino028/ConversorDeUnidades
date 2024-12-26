#include <stdio.h>
#include <math.h> //usando a função pow()

void converter(double valor, int unidade) {
    double bits, bytes, kb, mb, gb, tb;

    switch (unidade) { //Escolher a unidade do valor inserido
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

    bytes = bits / 8;
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    tb = gb / 1024;

    printf("\n--- Valores convertidos:\n");
    printf("Bits: %.2lf\n", bits);
    printf("Bytes: %.2lf\n", bytes);
    printf("Kilobytes (KB): %.2lf\n", kb);
    printf("Megabytes (MB): %.2lf\n", mb);
    printf("Gigabytes (GB): %.2lf\n", gb);
    printf("Terabytes (TB): %.2lf\n", tb);
}

int main() {
    double valor;
    int unidade;

    printf("Escolha a unidade inicial:\n");
    printf("1. Bits\n2. Bytes\n3. Kilobytes (KB)\n4. Megabytes (MB)\n5. Gigabytes (GB)\n6. Terabytes (TB)\n");
    printf("Digite a unidade (1-6): ");
    scanf("%d", &unidade);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    converter(valor, unidade);

    return 0;
}
