#include <stdio.h>

/*
programa 1
1 2 3 4 5 6 7 8 9 10
com while e com vetor:

int main(){
	int i=0, vetor[10];
	
	while(i<=10){
		vetor[i]=i+1;
		i++;
	}
	i=0;
	while(i<10){
	printf("%d ", vetor[i]);
	i++;
}
return 0;
}

Usando FOR:


int main(){
	int i=1;
	
	for(i=1; i<=10; i++){
	printf("%d ", i);
}

return 0;
}

programa 2
10 9 8 7 6 5 4 3 2 1

Usando While:


int main(){
	int i=10;
	while(i>=1){
	printf("%d ", i);
	i--;
}

return 0;
}

Usando FOR:

int main(){
	int i=1;
	
	for(i=10; i>=1; i--){
	printf("%d ", i);
}

return 0;
}
*/

int main(){
	int i=10;
	while(i>=1){
	printf("%d ", i);
	i--;
}

return 0;
}
