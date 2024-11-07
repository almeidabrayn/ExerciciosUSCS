#include <stdio.h>

int main() {
    int soma = 0, i = 1;

    // Loop while para calcular a soma dos números pares de 1 a 100
    while (i <= 100) {
        if (i % 2 == 0) {
            soma += i;
        }
        i++;
    }

    // Imprime a soma dos números pares
    printf("A soma dos numeros pares de 1 a 100 e: %d\n", soma);

    return 0;
}

