/*
Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- n�o eleitor (abaixo de 16 anos);
- eleitor obrigat�rio (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 at� 18 anos e maior de 65 anos, inclusive).
*/
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	if(idade<16){
		printf("\nN�o Eleitor.");
	}else if( (idade>=16 && idade<18) || (idade>=65)){
		printf("Eleitor Facultativo.");
	}else if(idade>=18 && idade<65){
		printf("Eleitor Obrigat�rio");
	}

	
	return 0;
}
