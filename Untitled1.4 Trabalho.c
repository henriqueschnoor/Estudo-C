//4 - Escreva um programa em C para ler dois valores
//para as variáveis A e B, e efetuar as trocas dos
//valores de forma que a variável A passe a possuir o
//valor da variável B e a variável B passe a possuir o
//valor da variável A. Apresentar os valores trocados.
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
 int A, B, inver;
printf("\nEntre com valor A: ");
scanf("%d", &A);
printf("\nEntrecom o valor B: ");
scanf("%d", &B);

inver = A;
A = B;
B = inver;

printf("\nos valores invertidos:\n");
printf("A: %d\n", A);
printf("B: %d\n", B);	

}

