#include <stdio.h>

int main(){
	int i=0;
	char nomeAluno[30];
	int vetor [5];
	
	for(i=0; i<5; i++)
	vetor[i] = i*2;
	
	for(i=0; i<5; i++)
		printf("%d", vetor[i]);
		
	return 0;
}
