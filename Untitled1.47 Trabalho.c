//47) Escreva um algoritmo que receba 10 n�meros do usu�rio e
//imprima o cubo de cada n�mero 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 0;
int numeros[10];
printf("Digite 10 n�meros:\n");
for (i = 0; i < 10; i++) {
    printf("N�mero %d: ", i + 1);
    scanf("%d", &numeros[i]);
    }
    printf("Cubos dos n�meros digitados:\n");
for ( i = 0; i < 10; i++) {
    int cubo = numeros[i] * numeros[i] * numeros[i];
    printf("N�mero %d: %d\n", numeros[i], cubo);
    }
    return 0;
}
