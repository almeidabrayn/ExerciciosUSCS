#include <stdio.h>

/*
dado dois n�meros inteiros
se s�o iguais imprima "iguais" ou diferentes
caso diferente imprima o maior valor


if(a != b){
	if(a > b)
	printf("n�mero 1 � maior");
	else
	printf("N�mero 2 � maior");
}
else
	printf("N�meros Iguais");
}
*/

int main(){
	int a=0, b=0;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &b);
	
	if (a == b){
		printf("iguais");
	} else if (a > b) {
            printf("O maior n�mero �: %d\n", a);
        } else {
            printf("O maior n�mero �: %d\n", b);
        }
return 0;
} 


