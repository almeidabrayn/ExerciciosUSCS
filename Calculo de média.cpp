#include<stdio.h>

int main(){
	int i=1;
	float n1, n2, n3, media;
	printf("Calculo de média dos alunos.");
	
	for(i=1; i>=0 ; ){
		printf("\nDigite a Nota 1, 2 e 3: ");
		scanf("%f %f %f", &n1, &n2, &n3);
		
		media = (n1+n2+n3)/3.0;
		
		if(media >=7){
		printf("\nAprovado");
		}else if (media >=4){
		printf("\nRecuperação");
		}else
		printf("\nReprovado");
	
		printf("\nMédia = %.2f", media);
	
	}
	return 0;
	}

