//10 idades imprima a média das idades
#include<stdio.h>

int main(){
	int idades[10], i=0, soma=0;
	float media=0;
	
	for (i=0; i<10; i++){
	printf("Digite o %d idades: \n", i+1);
	scanf("%d", &idades[i]);
	soma = soma + idades[i];
	}
	media = soma/10.0;
	printf("Média = %f", media);

return 0;
}
