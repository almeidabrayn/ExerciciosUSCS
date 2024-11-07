#include<stdio.h>

//Validador de senha e idade

//validador de senha sem loop e com loop

int main (){
	
	int senhaCadastro, senhaAcesso, i=2;
	printf("\n--------------------\n");
	printf("Cadastre a sua senha: ");
	scanf("%d", &senhaCadastro);
	
	printf("\n--------------------\n");
	printf("Cadastro de senha do Sistema:");
	scanf("%d", &senhaAcesso);
	
	while(senhaCadastro != senhaAcesso && i>0){
		printf("\nSenha Incorreta, tente novamente");
		printf("\nDigite novamente a sua senha: ");
		scanf("%d", &senhaAcesso);
		i--;
		printf("\n Tentativas restantes %d", i);
	}
		if (senhaCadastro != senhaAcesso){
		printf("\nAcesso Negado.");
		}else {
		printf("\nAcesso Permitido, bem vindo operador");
	}
	/*if (senhaCadastro != senhaAcesso){
		printf("Senha Incorreta, tente novamente");
	}else{
		printf("Acesso Permitido, bem vindo operador");
	}*/
	
	/*if (senhaCadastro == senhaAcesso){
	printf("Acesso Permitido, bem vindo operador");
	}else{
		printf("Senha Incorreta, tente novamente");
	}
	
*/

	return 0;
}
