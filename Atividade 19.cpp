#include<stdio.h>
#include<locale.h>
	int main()
	{
	setlocale(LC_ALL, "Portuguese");
		
		int n,i,cont=0;

		printf("Digite um número:\n");
		scanf("%d",&n);

		for(i=1; i<=n; i++){
				if(n%i==0){
					cont++;
				}
			}	
		
		if(cont == 2 || n == 1){
			printf("%d é primo.",n);
		}else{
			printf("%d não é primo.",n);			
		}
	}
