#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usu�rio um n�mero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Loop for para imprimir os n�meros pares de 2 at� o n�mero inserido
    for (int i = 2; i <= numero; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

