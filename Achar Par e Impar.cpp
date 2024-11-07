#include<stdio.h>
#include<math.h>

//acha todos pares ou impares de um número
int main(){
	int numero, i, soma=0;
	printf("Digite 1 número: ");
	scanf("%d", &numero);
	
	for(i=0 ; i<=numero; i++){
	if(i%2 == 0)
		if(i%7 != 0)
		printf("O número %d é par\n", i);	
	}
	return 0;
	
}
