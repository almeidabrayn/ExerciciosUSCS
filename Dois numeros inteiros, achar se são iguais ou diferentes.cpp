#include <stdio.h>

/*
dado dois números inteiros
se são iguais imprima "iguais" ou diferentes
caso diferente imprima o maior valor


if(a != b){
	if(a > b)
	printf("número 1 é maior");
	else
	printf("Número 2 é maior");
}
else
	printf("Números Iguais");
}
*/

int main(){
	int a=0, b=0;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	printf("Digite o segundo número: ");
	scanf("%d", &b);
	
	if (a == b){
		printf("iguais");
	} else if (a > b) {
            printf("O maior número é: %d\n", a);
        } else {
            printf("O maior número é: %d\n", b);
        }
return 0;
} 


