#include <stdio.h>

int main() {
    float temp;
    char opcao;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    printf("Converter para (C/F)? ");
    scanf(" %c", &opcao);

    if (opcao == 'F' || opcao == 'f') {
        printf("%.2f Celsius = %.2f Fahrenheit\n", temp, (temp * 9/5) + 32);
    } else if (opcao == 'C' || opcao == 'c') {
        printf("%.2f Fahrenheit = %.2f Celsius\n", temp, (temp - 32) * 5/9);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
