#include <stdio.h>

int main (){
	int numeros[10], i, maior;
	printf("Digite 10 valores inteiros: \n");
	
	for(i=0; i<10; i++){
		scanf("%d", &numeros[i]);
	
	if(i>0){
		if(numeros[i]>maior)
			maior = numeros[i];
	}
		else{
			maior = numeros[i];
		}
	}
	
	printf("Maior valor: %d", maior);

		return 0;
}
