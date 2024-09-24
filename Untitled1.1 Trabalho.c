//1 - Fa�a um programa em C que receba 2
//valores e calcule a sua m�dia.
#include<stdio.h>
#include<locale.h>
int main(){

setlocale(LC_ALL,"");
float nota1, nota2,nota;
printf("\nEntre com uma nota: ");
scanf("%f",&nota1);
 
printf("\nEntre com outra nota: ");
scanf("%f",&nota2);

nota=(nota1+nota2)/2;

printf("\nsua media foi:%f",nota);

}
