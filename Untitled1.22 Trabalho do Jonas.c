//22) Faça um programa que leia dois números A e B e imprima o
//maior deles. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int x,y;
 printf("\nEntre com o primeiro numero: ");
 scanf("%d",&x);
 
 printf("\nEntre com o segundo numero: ");
 scanf("%d",&y);
 
 if (x>y){
 	printf("\nO primeiro numero é maior.\n");
 }
 else if(y>x){
 	printf("\nO segundo numero é maior.\n");
 }
 else{
 	printf("\nOs numeros são iguais");
 }
 return 0;
}
