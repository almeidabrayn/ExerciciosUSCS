#include <stdio.h>

int main() {
    int numeros[3], menor;

    // Entrada dos n�meros
    printf("Digite tres numeros:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o menor n�mero com o primeiro elemento do array
    menor = numeros[0];

    // Encontra o menor n�mero
    for (int i = 1; i < 3; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Imprime o menor n�mero
    printf("O menor numero e: %d\n", menor);

    return 0;
}
