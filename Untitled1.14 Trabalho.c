//14) Faça um programa que receba um número e mostre uma
//mensagem caso este número seja maior que 10. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int valor;
 
 printf("Entre com um valor: ");
 scanf("%d",&valor);
 
 if (valor>10){
 	printf("\nEste numero %d é maior do que 10.\n", valor);
 }
 else{
 	printf("\nEste numero %d é menor que 10.\n", valor);
 }
 return 0;
}
