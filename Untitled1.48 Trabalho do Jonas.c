//48) Escreva um algoritmo que receba 15 números e imprima
//quantos números maiores que 30 foram digitados. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 0;
int numeros[15];
int contador = 0;
printf("\nDigite 15 números:\n");

for (i = 0; i < 15; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
if (numeros[i] > 30) {
    contador++;
}
}
    printf("Quantidade de números maiores que 30: %d\n", contador);

    return 0;
}

