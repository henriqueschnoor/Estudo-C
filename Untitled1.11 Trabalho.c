//11 - Fa�a um programa que receba o pre�o de custo
//de um produto e mostre o valor de venda. Sabe-se
//que o pre�o de custo receber� um acr�scimo de
//acordo com um percentual informado pelo usu�rio.
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
    float valor, acrecimo, valorvendido;
    printf("\nDigite o valor de custo do produto: ");
    scanf("%f", &valor);
    printf("\nDigite o valor de acr�scimo em porcentagem do produto: ");
    scanf("%f", &acrecimo);
    valorvendido=valor*(1+ acrecimo /100);
    printf("Valor de venda � em R$ do produto: %.2f\n", valorvendido);

    return 0;
}







