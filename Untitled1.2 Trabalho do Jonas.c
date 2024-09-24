//2)Faça um programa que receba 2 valores e
//retorne a soma, subtração, multiplicação e
//divisão dos valores informados.
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

printf("\nsua Soma é:%.1f",soma);
printf("\nsua Subtração é:%.1f",subtracao);
printf("\nsua Divisão é:%.1f",divisao);
printf("\nsua Multiplicação é:%.1f",multplicacao);
}
