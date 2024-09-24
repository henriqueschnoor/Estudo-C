//30) Escreva um programa em C que receba
//números do usuário e imprima o dobro de cada
//número. O programa se encerra quando zero
//for digitado. 
#include<stdio.h>
#include<locale.h>
int main() {
int numero;
setlocale(LC_ALL,"");
printf("Digite um número (ou para sair coloque 0): ");
scanf("%d", &numero);
while (numero != 0) {
printf("O dobro de %d é %d\n", numero, numero*2);
printf("Digite um número (ou para sair coloque 0): ");
scanf("%d", &numero);
}
printf("Programa encerrado.\n");
return 0;
}
