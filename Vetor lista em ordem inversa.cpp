#include<stdio.h>

//imprimir na ordem inversa
int main() {
	
	int lista[5] = {20, 30, 50, 10, 40};
	
	printf("\n");
	int i;
	for (i = 4; i >=0; i--)
		printf("%d ", lista[i]);
	printf("\n");

	return 0;
} 
