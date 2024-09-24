//11 - Faça um programa que receba o preço de custo
//de um produto e mostre o valor de venda. Sabe-se
//que o preço de custo receberá um acréscimo de
//acordo com um percentual informado pelo usuário.
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
    float valor, acrecimo, valorvendido;
    printf("\nDigite o valor de custo do produto: ");
    scanf("%f", &valor);
    printf("\nDigite o valor de acréscimo em porcentagem do produto: ");
    scanf("%f", &acrecimo);
    valorvendido=valor*(1+ acrecimo /100);
    printf("Valor de venda é em R$ do produto: %.2f\n", valorvendido);

    return 0;
}







