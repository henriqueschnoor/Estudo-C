//12 - O custo ao consumidor de um carro novo é a
//soma do custo de fábrica com a percentagem do
//distribuidor e dos impostos (aplicados, primeiro os
//12-impostos sobre o custo de fábrica, e depois a
//percentagem do distribuidor sobre o resultado).
//Supondo que a percentagem do distribuidor seja de
//28% e os impostos 45%. Escrever um programa que
//leia o custo de fábrica de um carro e informe o custo
//ao consumidor do mesmo.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
float custofabrica, imposto,distribuidor, custoconsumidor;
printf("\nInforme o custo da fabrica pelo carro novo: ");
scanf("%f", &custofabrica);
imposto = 0.45;
distribuidor = 0.28;
custoconsumidor = custofabrica + (custofabrica * distribuidor) + (custofabrica * imposto);
printf("O valor do carro com todos os custos é em R$:%.2f", custoconsumidor);
 

    
}
