#include <stdio.h>


void energia(float valor, int unidade) {
    if (unidade == 1) {
        printf("%.2f W = %.2f kW\n", valor, (valor / 1000));
        printf("%.2f W = %.2f cv\n", valor, (valor / 735.5));
    } else if (unidade == 2) {
        printf("%.2f kW = %.2f W\n", valor, (valor * 1000));
        printf("%.2f kW = %.2f cv\n", valor, (valor * 1.36));
    } else if (unidade == 3) {
        printf("%.2f cv = %.2f W\n", valor, (valor * 735.5));
        printf("%.2f cv = %.2f kW\n", valor, (valor / 1.36));
    } else {
        printf("Unidade inválida!\n");
    }
}

int main() {
    float valor;
    int unidade;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    printf("Digite o tipo de unidade: \n");
    printf("1 - W \n");
    printf("2 - KW \n");
    printf("3 - CV \n");
    scanf("%d", &unidade);

    energia(valor, unidade);
    return 0;
}