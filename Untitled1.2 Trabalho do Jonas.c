//2)Fa�a um programa que receba 2 valores e
//retorne a soma, subtra��o, multiplica��o e
//divis�o dos valores informados.
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float num1, num2, soma, subtracao, divisao, multplicacao;
printf("\nEntrecom o valor x: ");
scanf("%f",&num1);
printf("\neEntrecom o valor y: ");
scanf("%f",&num2);

soma=(num1+num2);
subtracao=(num1-num2);
divisao=(num1/num2);
multplicacao=(num1*num2); 

printf("\nsua Soma �:%.1f",soma);
printf("\nsua Subtra��o �:%.1f",subtracao);
printf("\nsua Divis�o �:%.1f",divisao);
printf("\nsua Multiplica��o �:%.1f",multplicacao);
}
