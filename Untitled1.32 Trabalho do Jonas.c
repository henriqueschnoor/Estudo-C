//32) Faça um algoritmo que receba números positivos até que o
//número zero seja digitado. Calcule e mostre ao final: a soma de
//todos os números digitados, a quantidade de números digitados,
//a média dos números digitados, o maior número digitado; o
//menor número digitado, a média dos números pares digitados, a
//porcentagem de números ímpares digitados; 
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int numero;
int soma = 0;
int quantidade = 0;
int maior = 0;int menor = 0;
int quantidade_pares = 0;
int soma_pares = 0;
int quantidade_impares = 0;
float media, media_pares, porcentagem_impares;
printf("Digite um numero positivo (0 para sair): ");
scanf("%d", &numero);
while (numero != 0) {
soma += numero;
quantidade++;
if (quantidade == 1) {
maior = numero;
menor = numero;
} 
else 
{
if (numero > maior)
{
maior = numero;
}
if (numero < menor) {
menor = numero;
}
}
if (numero % 2 == 0) {
quantidade_pares++;
soma_pares += numero;
} 
else 
{
quantidade_impares++;
}
printf("Digite um numero positivo (Coloque 0 para sair): ");
scanf("%d", &numero);
    }
media = (float)soma / quantidade;
media_pares = (float)soma_pares / quantidade_pares;
porcentagem_impares = ((float)quantidade_impares / quantidade) * 100;

printf("Soma dos numeros digitados: %d\n", soma);
printf("Quantidade de numeros digitados: %d\n", quantidade);
printf("Media dos numeros digitados: %.2f\n", media);
printf("Maior numero digitado: %d\n", maior);
printf("Menor numero digitado: %d\n", menor);
printf("Media dos numeros pares digitados: %.2f\n", media_pares);
printf("Porcentagem de numeros impares digitados: %.2f\n", porcentagem_impares);
    return 0;
}
