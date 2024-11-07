#include <stdio.h>

int main() {
    int numeros[3];
    int maior;

    // Entrada dos números
    printf("Digite tres numeros:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o maior número com o primeiro elemento do array
    maior = numeros[0];

    // Encontra o maior número
    for (int i = 1; i < 3; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Imprime o maior número
    printf("O maior numero e: %d\n", maior);

    return 0;
}

