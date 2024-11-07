#include <stdio.h>

int main() {
    int n, numero, maior, contador = 1;

    // Solicita ao usu�rio a quantidade de n�meros
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    // Solicita o primeiro n�mero e inicializa o maior n�mero com ele
    printf("Digite o numero 1: ");
    scanf("%d", &maior);

    // Loop while para solicitar os pr�ximos n�meros e encontrar o maior
    while (contador < n) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        contador++;
    }

    // Imprime o maior n�mero
    printf("O maior numero e: %d\n", maior);

    return 0;
}

