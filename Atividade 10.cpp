/*
Crie um programa que receba 2 valores e um operador aritm�tico b�sico (+ - * /) e apresente o resultado
do c�lculo. Utilize switch case.
*/
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	char k;
	
	printf("Digite um valor:");
	scanf("%f",&n1);
	printf("\nDigite outro valor:");
	scanf("%f",&n2);
	printf("\nQual c�lculo vo�� deseja fazer? (+ - * /):");
	scanf("%s",&k);
	
	
	switch(k){
		case '*':
			
			printf("\n %.2f * %2.f = %.2f",n1,n2,(n1*n2));
			break;
			
		case '/':
			
			printf("\n %.2f / %2.f = %.2f",n1,n2,(n1/n2));
			break;
		
		case '+':
			
			printf("\n %.2f + %2.f = %.2f",n1,n2,(n1+n2));
			break;
		
		case '-':
			printf("\n %.2f - %2.f = %.2f",n1,n2,(n1-n2));
			break;
	}
	
	
	

	
	
	return 0;
}
