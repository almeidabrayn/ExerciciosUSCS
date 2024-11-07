#include <stdio.h> //reconhece printf scanf
/*
int main () {
int i=0;

while (i < 5){
printf("%d ",i);
i = i + 1;
}
return 0;
}

*/

//media entre 2 notas

/*
int main (){
	int nota1 = 9, nota2 = 8;
	float media = 0;
	
	media =(nota1+nota2)/2.0;
	
	printf("Media = %.2f", media);
	
	return 0;
	
}
*/


int main (){
	int i=0, nota=0, soma=0;
	float media = 0;
	for(i=0; i<5; i++){
		printf("Digite a %dª nota", i+1);
		scanf("%d", &nota);
		soma = soma + nota;
	}
	
	media=(float)soma/i;
	
	printf("Media = %.2f", media);
	
	return 0;
	
}

