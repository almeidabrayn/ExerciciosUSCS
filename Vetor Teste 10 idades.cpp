//10 idades imprima a média das idades
#include<stdio.h>

int main(){
	int idades[10], i=0, soma=0;
	float media=0;
	
	printf("Digite 10 idades: \n");

	for (i=0; i<10; i++){
	scanf("%d", &idades[i]);
	soma = soma + idades[i];
}
	media = soma/10;
	
printf("Média = %f", media);

return 0;
}
