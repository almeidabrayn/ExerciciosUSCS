#include<stdio.h>
#include<math.h>

int mains(){
int numero, i, soma=0;
printf("Digite 1 n�mero: ");
scanf("%d", &numero);

for (i=1 ; i<=numero ; i++){
	soma = soma + (5*pow(i, 2) + 2 * i + 8);
}

printf("Somat�ria", soma);
return 0;
}
