#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicita ao usu�rio um n�mero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Loop while para imprimir os n�meros de 1 at� o n�mero inserido
    while (i <= numero) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

