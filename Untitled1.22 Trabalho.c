//22) Fa�a um programa que leia dois n�meros A e B e imprima o
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
 	printf("\nO primeiro numero � maior.\n");
 }
 else if(y>x){
 	printf("\nO segundo numero � maior.\n");
 }
 else{
 	printf("\nOs numeros s�o iguais");
 }
 return 0;
}
