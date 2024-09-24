//5 - Escreva um programa que leia uma temperatura em
//graus Celsius e apresente-a convertida em graus
//Fahrenheit. A fórmula de conversão é: F=(9*C+160) /
//5, sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius.
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL,"");
float Celsius, Fahrenheit;
printf("Entre com graus Celsius para converter em graus Fahrenheit:  ");
scanf("%f",&Celsius);
Fahrenheit=(9*Celsius+160)/5;
printf("O valor convertido é:%.2f\n",Fahrenheit);
return 0;
}

