//30) Escreva um programa em C que receba
//n�meros do usu�rio e imprima o dobro de cada
//n�mero. O programa se encerra quando zero
//for digitado. 
#include<stdio.h>
#include<locale.h>
int main() {
int numero;
setlocale(LC_ALL,"");
printf("Digite um n�mero (ou para sair coloque 0): ");
scanf("%d", &numero);
while (numero != 0) {
printf("O dobro de %d � %d\n", numero, numero*2);
printf("Digite um n�mero (ou para sair coloque 0): ");
scanf("%d", &numero);
}
printf("Programa encerrado.\n");
return 0;
}
