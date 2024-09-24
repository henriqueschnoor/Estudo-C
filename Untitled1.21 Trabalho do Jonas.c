//21) Em uma empresa o salário final de um vendedor é composto de
//um valor fixo mais um percentual sobre suas vendas de acordo
//com as informações abaixo:
//Vendas de R$ 0,00 à R$ 1.500,00 = 2,00%
//Vendas de R$ 1.501,00 à R$ 3.000,00 = 3,00%
//Vendas de R$ 3.001,00 à R$ 6.000,00 = 5,00%
//Vendas acima de R$ 6.001,00 = 6,00%
//Além disso, ele é descontado em R$ 5,00 por cada dia de falta ao
//serviço.
//Faça um programa que receba o valor da parte fixa do salário, o
//total de vendas no período e o número de faltas de um vendedor e
//imprima o seu salário final. 
#include<stdio.h>
#include<locale.h>
int main(){
float salarioFixo, vendas, salarioFinal;
int faltas;
 setlocale(LC_ALL,"");

printf("Digite o valor da parte fixa do salário: ");
scanf("%f", &salarioFixo);
printf("Digite o total de vendas no período: ");
scanf("%f", &vendas);
printf("Digite o número de faltas: ");
scanf("%d", &faltas);

float percentualComissao;

if (vendas <= 1500) {
percentualComissao = 0.02;
} else if (vendas <= 3000) {
percentualComissao = 0.03;
} else if (vendas <= 6000) {
percentualComissao = 0.05;
} 
else {
percentualComissao = 0.06;
}
float comissao = vendas * percentualComissao;
float descontosFaltas = faltas * 5;
salarioFinal = salarioFixo + comissao - descontosFaltas;

printf("Salário final do vendedor : R$ %.2f\n", salarioFinal);

return 0;
}
