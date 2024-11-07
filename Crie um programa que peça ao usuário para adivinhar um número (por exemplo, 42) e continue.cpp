#include <stdio.h>

int main() {
    int numero_secreto = 42, int palpite;

    // Loop para continuar pedindo at� que o usu�rio acerte o n�mero
    do {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

        if (palpite < numero_secreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou o numero.\n");
        }
    } while (palpite != numero_secreto);

    return 0;
}

