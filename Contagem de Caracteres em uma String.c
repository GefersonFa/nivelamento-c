#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("A string possui %lu caracteres (incluindo espacos).\n", strlen(texto) - 1);
    return 0;
}
