//49) A conversão de Farenheight para Celsius é obtida pela fórmula:
//C = 5/9 * (F– 32). Faça um programa que calcule e escreva uma
//tabela de Celsius e Farenheight cujos graus variam de 40° F a 80°
//F, de 1 em 1. 
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
	int fahrenheit = 40;
    printf("Fahrenheit\tCelsius\n");
for (fahrenheit = 40; fahrenheit <= 80; fahrenheit++) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }
    return 0;
}
