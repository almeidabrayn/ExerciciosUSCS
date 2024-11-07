#include <stdio.h>

int main() {
    int n, numero, maior, contador = 1;

    // Solicita ao usuário a quantidade de números
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    // Solicita o primeiro número e inicializa o maior número com ele
    printf("Digite o numero 1: ");
    scanf("%d", &maior);

    // Loop while para solicitar os próximos números e encontrar o maior
    while (contador < n) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        contador++;
    }

    // Imprime o maior número
    printf("O maior numero e: %d\n", maior);

    return 0;
}

