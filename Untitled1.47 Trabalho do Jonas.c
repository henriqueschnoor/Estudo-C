//47) Escreva um algoritmo que receba 10 números do usuário e
//imprima o cubo de cada número 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 0;
int numeros[10];
printf("Digite 10 números:\n");
for (i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
    }
    printf("Cubos dos números digitados:\n");
for ( i = 0; i < 10; i++) {
    int cubo = numeros[i] * numeros[i] * numeros[i];
    printf("Número %d: %d\n", numeros[i], cubo);
    }
    return 0;
}
