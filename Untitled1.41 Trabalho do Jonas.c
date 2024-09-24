//41) Uma empresa deseja aumentar seus preços em 20%. Faça um
//algoritmo que leia o código e o preço de custo de cada produto e
//calcule o preço novo. Calcule também, a média dos preços com e
//sem aumento. Mostre o código e o preço novo de cada produto e,
//no final, as médias. Há um total de 100 produtos.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 1;
int codigo, quantidade_produtos = 100;
float preco_custo, preco_novo, total_precos_custo = 0, total_precos_novo = 0;

for ( i = 1; i <= quantidade_produtos; i++) {
printf("Informe o código do produto %d: ", i);
scanf("%d", &codigo);
        
printf("Informe o preço de custo do produto %d: ", i);
scanf("%f", &preco_custo);

preco_novo = preco_custo * 1.2; 
        
printf("Código: %d\n", codigo);
printf("Preço Novo: %.2f\n", preco_novo);

total_precos_custo += preco_custo;
total_precos_novo += preco_novo;
    }
float media_precos_custo = total_precos_custo / quantidade_produtos;
float media_precos_novo = total_precos_novo / quantidade_produtos;

printf("Média de preços de custo: %.2f\n", media_precos_custo);
printf("Média de preços com aumento: %.2f\n", media_precos_novo);

    return 0;
}
