/*
Construa um programa em C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do
teclado) � PAR ou �MPAR. (Usar o operador resto: Ex: N%2)).
*/

include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("\n%d � par.",n);
	}else{
		printf("\n%d � impar.",n);		
	}

	
	return 0;
}
