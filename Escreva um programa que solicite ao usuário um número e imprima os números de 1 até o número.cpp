#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicita ao usuário um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Loop while para imprimir os números de 1 até o número inserido
    while (i <= numero) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

