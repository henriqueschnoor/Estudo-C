//14) Fa�a um programa que receba um n�mero e mostre uma
//mensagem caso este n�mero seja maior que 10. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int valor;
 
 printf("Entre com um valor: ");
 scanf("%d",&valor);
 
 if (valor>10){
 	printf("\nEste numero %d � maior do que 10.\n", valor);
 }
 else{
 	printf("\nEste numero %d � menor que 10.\n", valor);
 }
 return 0;
}
