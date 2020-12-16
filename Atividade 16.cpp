#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
setlocale(LC_ALL, "Portuguese");
	
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	

	if(x>=0 && x<=432 && y>=0 && y<=468){
		printf("Dentro.");
	}else{
		printf("Fora.");
	}

	
	return 0;
	
}
