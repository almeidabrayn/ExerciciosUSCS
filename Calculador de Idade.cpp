#include <stdio.h>

//Classificador de Idade

int main(){
	int i=0;
	
	while (i>=0){
	printf("Digite a sua idade ou -1 para sair: ");
	scanf("%d", &i);
	
	if(i>= 65){
		printf("idoso\n");
	} else if (i>=18){
	printf("Adulto\n");
	} else if (i>=13){
		printf("Adolecente\n");
	} else {
	printf("Criança\n");
	}
	}
	printf("Programa Finalizado.");

	return 0;
}


/*	if(i>= 65){
		printf("idoso\n");
	} else if (i<=64 && i>=18){
	printf("Adulto\n");
	} else if (i>=13 && i<=17){
		printf("Adolecente\n");
	} else if (i>=0 && i<=12){
	printf("Criança\n");
	}
	}*/
