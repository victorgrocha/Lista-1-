/*
O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
ao consumidor.
*/

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custof;
	
	
	printf("Digite o custo de f�brica:\n");
	scanf("%f",&custof);
	
	custof = custof + (custof*0.25) + (custof * 0.42);
	
	printf("Custo ao consumidor � de  %.2f\n",custof);
	
	
	return 0;
}
