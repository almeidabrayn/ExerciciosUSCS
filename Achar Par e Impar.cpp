#include<stdio.h>
#include<math.h>

//acha todos pares ou impares de um n�mero
int main(){
	int numero, i, soma=0;
	printf("Digite 1 n�mero: ");
	scanf("%d", &numero);
	
	for(i=0 ; i<=numero; i++){
	if(i%2 == 0)
		if(i%7 != 0)
		printf("O n�mero %d � par\n", i);	
	}
	return 0;
	
}
