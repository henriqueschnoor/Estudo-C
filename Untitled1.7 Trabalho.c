//7 - Escrever um programa em C que leia o nome de
//um vendedor, o seu sal�rio fixo e o total de vendas
//efetuadas por ele no m�s (em dinheiro). Sabendo
//que este vendedor ganha 15% de comiss�o sobre
//suas vendas efetuadas, informar o seu nome, o
//sal�rio fixo e sal�rio no final do m�s. 
#include<stdio.h>
#include<locale.h>
int main() {
    char nome[50];
    float salarioFixo, totalVendas, comissao, salarioFinal;
    setlocale(LC_ALL,"");
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite o sal�rio fixo do vendedor: ");
    scanf("%f", &salarioFixo);
    printf("Digite o total de vendas efetuadas: ");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.15;
    salarioFinal = salarioFixo + comissao;
    
    printf("\nNome do vendedor: %s\n", nome);
    printf("Sal�rio fixo: R$ %.2f\n", salarioFixo);
    printf("Sal�rio no final do m�s: R$ %.2f\n", salarioFinal);
}
