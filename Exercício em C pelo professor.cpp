#include <stdio.h>

int main(){
	char nomeAluno[30];
	float n1, n2, n3, n4, n5;
	float media, soma, maior, menor;
	
	scanf("%s", nomeAluno);
	printf("------------------------\n");
	printf("Sistema de Notas da Escola\n");
	printf("Digite as notas do aluno: %s\n", nomeAluno);
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	printf("Digite a nota 4: ");
	scanf("%f", &n4);
	printf("Digite a nota 5: ");
	scanf("%f", &n5);
	
	soma = n1+n2+n3+n4+n5;
	media = soma/5;
	maior = menor = n1;
	if(n2 > maior)
		maior = n2;
	if(n3 > maior)
		maior = n3;
	if(n4 > maior)
		maior = n4;	
	if(n5 > maior)
		maior = n5;
	
	if(n2 < menor)
		menor = n2;
	if(n3 < menor)
		menor = n3;
	if(n4 < menor)
		menor = n4;
	if(n5 < menor)
		menor = n5;
	
	printf("Soma = %.2f, M�dia = %.2f, ", soma, media);
	printf("Maior = %.2f, Menor = %.2f", maior, menor);
	return 0;
}
