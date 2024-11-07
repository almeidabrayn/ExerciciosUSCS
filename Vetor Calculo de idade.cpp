#include<stdio.h>

int main(){
	int idade[10];
	int i, soma=0;
	for (i=0; i<10; i++){
		
		scanf("%d", &idade[i]);
		soma += idade[i]; //scaneia as idades e soma elas
	}
	
	double media = soma /10.0;
	
	int qtd_acima_media = 0; //faz a média das idades
	for (i=0; i < 10; i++)
		if(idade[i] > media)
			qtd_acima_media++;
	
	printf("Ha %d pessoa(s) acima da media.", qtd_acima_media);
	
	return 0;
}
