/*Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
� O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um n�mero:");
	scanf("%f",&n);
	
	if(n>=0){
		printf("\n%.3f� � %.3f.",n,(n*n));
		printf("\nA raiz quadrada de %.3f � %.3f.",n,sqrt(n));
	}else{
		printf("\n%.3f � um n�mero menor que 0.",n);
	
	}
	
	
	return 0;
}
