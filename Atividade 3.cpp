/*Usando switch, escreva um programa que leia um inteiro entre 1 e 7
 e imprima o dia da semana correspondente a este n�mero. Isto e,
 domingo se 1, segunda-feira se 2, e assim por diante.*/


#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("N�mero inteiro: \n");
	scanf("%d",&n);
	
	switch (n){
	case 1:
	    printf("\n%d corresponde ao domingo",n);
	break;
	case 2:
	    printf("\n%d corresponde � segunda-feira",n);
	break;
	case 3:
	    printf("\n%d corresponde � ter�a-feira",n);
	break;
	case 4:
	    printf("\n%d corresponde � quarta-feira",n);
	break;
	case 5:
	     printf("\n%d corresponde � quinta-feira",n);
	break;
	case 6:
	     printf("\n%d corresponde � sexta-feira",n);
	break;
	case 7:
	    printf("\n%d corresponde ao sabado",n);
	break;
	default:
        printf("\n%d n�o corresponde � nenhum dia da semana",n);
    break;
	
	}

	
	return 0;
}
