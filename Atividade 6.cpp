/*Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1,n2;
	printf("Digite um n�mero:");
	scanf("%f",&n1);
	printf("\nDigite outro n�mero:");
	scanf("%f",&n2);
	
	if(n1>n2){
		printf("\n%.3f � maior que %.3f",n1,n2);
	}else if(n2>n1){
		printf("\n%.3f � maior que %.3f",n2,n1);	
	}else{
		printf("\n%.3f � %.3f s�o iguais",n1,n2);
	
	}
	
	
	
	
	return 0;
}
