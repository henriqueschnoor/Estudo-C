//15) Fa�a um programa que pe�a o ano de nascimento de uma
//pessoa, e diga, se for maior de idade, que pode entrar na boate, e
//se n�o for, n�o pode. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int idade;
 
 printf("\nDigite sua idade para verificar se voc� pode entrar na boate.: ");
 scanf("%d",&idade);
 
 if (idade>=18){
 	printf("\nSe sua idade � %d, � de maior pode entrar na boate.\n", idade);
 }
 else{
 	printf("\nj� que sua idade � %d, N�o pode entrar na boate.\n", idade);
 }
 return 0;
}
