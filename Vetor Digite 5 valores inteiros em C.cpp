#include <stdio.h>
int main(){
	int numeros[5];
	printf("Digite 5 valores inteiros ");
	scanf("%d", &numeros[0]);
	scanf("%d", &numeros[1]);
	scanf("%d", &numeros[2]);
	scanf("%d", &numeros[3]);
	scanf("%d", &numeros[4]);
	
	printf("%d ", numeros[0]);
	printf("%d ", numeros[1]);
	printf("%d ", numeros[2]);
	printf("%d ", numeros[3]);
	printf("%d", numeros[4]);
	
	return 0;
}
