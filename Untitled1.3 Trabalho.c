//3 - Escreva um programa para determinar o consumo
//médio de um automóvel sendo fornecida a distância
//total percorrida pelo automóvel e o total de
//combustível gasto.
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
