//10 - Uma loja est� vendendo seus produtos em 5
//presta��es sem juros. Fa�a um programa que
//receba um valor de uma compra e mostre o valor
//das presta��es.
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float ValorCompra,Prestacoes;
printf("Entre com o valor da compra: ");
scanf("%f",&ValorCompra);
Prestacoes = ValorCompra /5;
printf("O valor das Presta��es em (5 Parcelas) de:%.2f ",Prestacoes);

}
