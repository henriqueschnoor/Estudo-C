//7 - Escrever um programa em C que leia o nome de
//um vendedor, o seu salário fixo e o total de vendas
//efetuadas por ele no mês (em dinheiro). Sabendo
//que este vendedor ganha 15% de comissão sobre
//suas vendas efetuadas, informar o seu nome, o
//salário fixo e salário no final do mês. 
#include<stdio.h>
#include<locale.h>
int main() {
    char nome[50];
    float salarioFixo, totalVendas, comissao, salarioFinal;
    setlocale(LC_ALL,"");
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salarioFixo);
    printf("Digite o total de vendas efetuadas: ");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.15;
    salarioFinal = salarioFixo + comissao;
    
    printf("\nNome do vendedor: %s\n", nome);
    printf("Salário fixo: R$ %.2f\n", salarioFixo);
    printf("Salário no final do mês: R$ %.2f\n", salarioFinal);
}
