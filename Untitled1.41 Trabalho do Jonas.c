//41) Uma empresa deseja aumentar seus pre�os em 20%. Fa�a um
//algoritmo que leia o c�digo e o pre�o de custo de cada produto e
//calcule o pre�o novo. Calcule tamb�m, a m�dia dos pre�os com e
//sem aumento. Mostre o c�digo e o pre�o novo de cada produto e,
//no final, as m�dias. H� um total de 100 produtos.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 1;
int codigo, quantidade_produtos = 100;
float preco_custo, preco_novo, total_precos_custo = 0, total_precos_novo = 0;

for ( i = 1; i <= quantidade_produtos; i++) {
printf("Informe o c�digo do produto %d: ", i);
scanf("%d", &codigo);
        
printf("Informe o pre�o de custo do produto %d: ", i);
scanf("%f", &preco_custo);

preco_novo = preco_custo * 1.2; 
        
printf("C�digo: %d\n", codigo);
printf("Pre�o Novo: %.2f\n", preco_novo);

total_precos_custo += preco_custo;
total_precos_novo += preco_novo;
    }
float media_precos_custo = total_precos_custo / quantidade_produtos;
float media_precos_novo = total_precos_novo / quantidade_produtos;

printf("M�dia de pre�os de custo: %.2f\n", media_precos_custo);
printf("M�dia de pre�os com aumento: %.2f\n", media_precos_novo);

    return 0;
}
