#include<stdio.h>
#include<stdlib.h>
#include <locale.h>



int main(){
int aleatorio, numero, cont=0;
	
	srand(time(NULL)); // iniciando o gerador de numeros
	aleatorio = rand()%20; // 0-19
    do{
    	printf("Numero da sorte:");
    	scanf("%d",&numero);
    	cont++;
	
	}while(numero!=aleatorio);
	printf("Aleatorio:%d | Seu numero:%d\n", aleatorio, numero);
    printf("Foram necessarias %d tentativas\n", cont);
	
	
return 0;
}
