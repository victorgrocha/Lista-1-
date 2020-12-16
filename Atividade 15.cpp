#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	

setlocale(LC_ALL, "Portuguese");
	
	int n[3],i,maior,posicaoMaior,segundoMaior;
	

	for(i=0; i<3; i++){
		scanf("%d",&n[i]);
		if(maior<=n[i]){
			maior=n[i];
			posicaoMaior = i;
		}
	}
	
	for(i=0; i<3; i++){
		if(i!=posicaoMaior){
			if(segundoMaior<=n[i]){
			segundoMaior=n[i];

		}
		}
		
	}	
	
	printf("\n\n%d",segundoMaior);
	
return 0;
	
}
