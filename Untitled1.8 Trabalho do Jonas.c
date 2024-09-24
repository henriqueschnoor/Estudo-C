//8 - Elaborar um programa que efetue a apresentação
//do valor da conversão em real (R$) de um valor lido
//em dólar (US$). O programa em C deverá solicitar o
//valor da cotação do dólar e também a quantidade de
//dólares disponíveis com o usuário.
#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "");
float CotaDolar, Dolar, Reais;
    printf("Entre com o valor em Reais: ");
    scanf("%f", &Reais);

    printf("Entre com a cotação do dólar do dia: ");
    scanf("%f", &CotaDolar);

    Dolar = Reais / CotaDolar;
    printf("O valor convertido é: %.2f", Dolar);
    return 0; 
}
