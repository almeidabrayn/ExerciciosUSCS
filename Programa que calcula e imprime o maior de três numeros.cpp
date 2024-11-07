#include <stdio.h>

int main() {
    int numeros[3];
    int maior;

    // Entrada dos n�meros
    printf("Digite tres numeros:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o maior n�mero com o primeiro elemento do array
    maior = numeros[0];

    // Encontra o maior n�mero
    for (int i = 1; i < 3; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Imprime o maior n�mero
    printf("O maior numero e: %d\n", maior);

    return 0;
}

