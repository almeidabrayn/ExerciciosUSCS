#include<stdio.h>
/*
int main(){
	int i=1, n1, n2, n3, maior;
	printf("Digite 3 números: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	maior = n1;
	
	if (n2 > maior)
		maior = n2;
	if (n3 > maior)
		maior = n3;
		
	printf("O maior número = %d", maior);
	return 0;
}
*/

//Sem uma 4 variável, sem o maior

int main(){
	int i=1, n1, n2, n3;
	printf("Digite 3 números: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
if(n1 > n2 && n1 > n3){
	printf("O maior = %d", n1);
}else if (n1 < n2 && n2 > n3){
	printf("O maior = %d", n2);
} else {
	printf("O maior = %d", n3);
}

	return 0;
}
