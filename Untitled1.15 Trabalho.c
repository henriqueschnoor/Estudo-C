//15) Faça um programa que peça o ano de nascimento de uma
//pessoa, e diga, se for maior de idade, que pode entrar na boate, e
//se não for, não pode. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int idade;
 
 printf("\nDigite sua idade para verificar se você pode entrar na boate.: ");
 scanf("%d",&idade);
 
 if (idade>=18){
 	printf("\nSe sua idade é %d, É de maior pode entrar na boate.\n", idade);
 }
 else{
 	printf("\njá que sua idade é %d, Não pode entrar na boate.\n", idade);
 }
 return 0;
}
