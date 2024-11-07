#include <stdio.h>

int main() {
    int soma = 0;

    // Loop for para calcular a soma dos números pares de 1 a 100
    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }

    // Imprime a soma dos números pares
    printf("A soma dos numeros pares de 1 a 100 e: %d\n", soma);

    return 0;
}

