#include <stdio.h>

int main() {
    int contador = 0;
    float numero, soma = 0.0;

    // Loop while para solicitar 5 n�meros ao usu�rio
    while (contador < 5) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%f", &numero);
        soma += numero;
        contador++;
    }

    // Calcula a m�dia
    float media = soma / 5;

    // Imprime a m�dia
    printf("A media dos 5 numeros e: %.2f\n", media);

    return 0;
}

