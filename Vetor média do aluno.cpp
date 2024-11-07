#include <stdio.h>

int main (){
	
	int i=0;
	char nomeAluno[30];
	float n1, n2, n3, n4, n5;
	float media=0, soma=0, maior=0, menor=0, nota=0;
	
	printf("Digite o nome do aluno: \n");
	scanf("%s", nomeAluno);
	printf("-----------------------\n");
	printf("sistema de notas da escola\n");
	printf("digite as notas dos alunos: %s\n", nomeAluno);
	
	while(i<=5){
		printf("digite a nota %d:", i);
		scanf("%f", &nota);
		soma = soma + nota;
		
	if(i==1)
	maior = menor = n1;
	else{
		if(nota > maior)
		maior = nota;
		if(nota < menor)
		menor = nota;
	}
	i++;
	}
	
media = soma/5.0;

printf("Soma = %.2f, Média = %.2f, ", soma, media);
printf("Maior = %.2f, Menor = %.2f", maior, menor);
		
	return 0;
}
