#include <stdio.h>

int main (){
	
	char nomeAluno[30];
	float n1, n2, n3, n4, n5;
	float media=0, soma=0, maior=0, menor=0, nota=0;
	
	printf("Digite o nome do aluno: \n");
	scanf("%s", nomeAluno);
	printf("-----------------------\n");
	printf("sistema de notas da escola\n");
	printf("digite as notas dos alunos: %s\n", nomeAluno);
	
	for(i=1;i<=5;i++){
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

	}
	
media = soma/5.0;

printf("Soma = %.2f, Média = %.2f, ", soma, media);
printf("Maior = %.2f, Menor = %.2f", maior, menor);
		
	return 0;
}
