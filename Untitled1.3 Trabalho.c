//3 - Escreva um programa para determinar o consumo
//m�dio de um autom�vel sendo fornecida a dist�ncia
//total percorrida pelo autom�vel e o total de
//combust�vel gasto.
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float km,litros,resul;
printf("Conversor de quilometros por litro  \n");

printf("Coloque os quilometros rodados pelo carro: ");
scanf("%f",&km);

printf("\nColoque os litros gastos pelo carro: ");
scanf("%f",&litros);

resul=(km/litros);

printf("\nO valor de quilometros por litro que o carro gastou foi: %.2f",resul);
}
