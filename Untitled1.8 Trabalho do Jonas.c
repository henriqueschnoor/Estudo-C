//8 - Elaborar um programa que efetue a apresenta��o
//do valor da convers�o em real (R$) de um valor lido
//em d�lar (US$). O programa em C dever� solicitar o
//valor da cota��o do d�lar e tamb�m a quantidade de
//d�lares dispon�veis com o usu�rio.
#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "");
float CotaDolar, Dolar, Reais;
    printf("Entre com o valor em Reais: ");
    scanf("%f", &Reais);

    printf("Entre com a cota��o do d�lar do dia: ");
    scanf("%f", &CotaDolar);

    Dolar = Reais / CotaDolar;
    printf("O valor convertido �: %.2f", Dolar);
    return 0; 
}
