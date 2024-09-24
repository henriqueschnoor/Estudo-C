//6 - Escreva um programa que leia uma temperatura em
//graus Fahrenheit e apresente-a convertida em graus
//Celsius. A fórmula de conversão é: ºC = (°F - 32)*5/9
//sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius.
#include<stdio.h>
#include<locale.h>
int main(){
	float Celsius, Fahrenheit;
	printf("Entrar com a temperatura em Fahrenheit:");
	scanf("%f",&Fahrenheit);
	Celsius=(Fahrenheit- 32)*5/9;
	printf("A temperatura convertida em graus Celsius:\n%.2f ",Celsius);
}
