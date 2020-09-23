#include <stdio.h>


int main(){
	int dia;
while(1){ //inicio while
	
	printf("Numero do dia:");
	scanf("%d" ,&dia);
	switch(dia){
	
	case 1: 
	    printf("Domingo\n");
		break;
	case 2:
	   	printf("Segunda - Que saco!!\n");
	   	break;
	case 3:
		printf("Terca\n");
		break;
	case 4:
		printf("Quarta\n");
		break;
	case 5:
		printf("Quinta\n");
		break;
	case 6:
		printf("Sexta - YESS SEXTOUU!!\n");
		break;
	case 7:
		printf("Sabado\n");
		break;
	default:
		printf("Dia invalido, digite somente numeros do 1 ao 7\n");		
	break;	
	
	} //fim switch

} //fim do while
return 0;
}
