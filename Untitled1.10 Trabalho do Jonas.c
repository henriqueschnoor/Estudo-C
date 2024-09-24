//10 - Uma loja está vendendo seus produtos em 5
//prestações sem juros. Faça um programa que
//receba um valor de uma compra e mostre o valor
//das prestações.
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float ValorCompra,Prestacoes;
printf("Entre com o valor da compra: ");
scanf("%f",&ValorCompra);
Prestacoes = ValorCompra /5;
printf("O valor das Prestações em (5 Parcelas) de:%.2f ",Prestacoes);

}
