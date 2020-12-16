/*
Construa um programa em C para determinar se o indiv�duo est� com um peso favor�vel. Essa situa��o �
determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida como sendo a rela��o entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indiv�duo. Ou seja,
e, a situa��o do peso � determinada pela tabela abaixo:
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
	float altura, peso, imc;

	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	imc = peso / ( pow(altura,2) );
	
	printf("Seu IMC � %.2f.\n\n",imc);
	
	if(imc < 20){
		printf("Abaixo do peso.");
	}else if(imc>= 20 && imc<25){
		printf("Peso normal.");
	}else if(imc>=25 && imc<30){
		printf("Sobre Peso.");
	}else if(imc>=30 && imc<40){
		printf("Obeso.");
	}else if(imc>=40){
		printf("Obeso M�rbido.");
	}
	
	
	
	
	return 0;
	
}
