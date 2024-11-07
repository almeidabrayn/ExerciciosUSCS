#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Loop for para imprimir os números pares de 2 até o número inserido
    for (int i = 2; i <= numero; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

