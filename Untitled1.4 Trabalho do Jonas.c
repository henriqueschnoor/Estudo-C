//4 - Escreva um programa em C para ler dois valores
//para as vari�veis A e B, e efetuar as trocas dos
//valores de forma que a vari�vel A passe a possuir o
//valor da vari�vel B e a vari�vel B passe a possuir o
//valor da vari�vel A. Apresentar os valores trocados.
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

