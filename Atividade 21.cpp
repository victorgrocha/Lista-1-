/*
A s�rie de Fibonacci � formada pela sequ�ncia:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a s�rie de FIBONACCI at� o N-�simo termo informado pelo usu�rio.
*/
#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");
  int a, b, k, i, n;

  a = 0;
  b = 1;
 
  printf("Digite um n�mero: ");
  scanf("%d", &n);
  
  printf("%d\n", b);

  for(i = 0; i < n; i++){
    k = a + b;
    a = b;
    b = k;
 
    printf("%d\n", k);
  }
  


return 0;
}
