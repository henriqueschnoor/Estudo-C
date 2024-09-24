//29) Faça um programa em C que leia valores e
//escreva o maior e o menor valor lido. O
//programa finaliza quanto o valor 0 for digitado.
#include<stdio.h>
#include<locale.h>
int main() {
int valor, maior, menor;
setlocale(LC_ALL,"");
printf("Digite um valor (coloque 0 para sair): ");
scanf("%d", &valor);
if (valor==0) {
printf("Nenhum valor foi inserido.\n");
return 0;
}
maior = menor = valor;
while (valor!=0) {
	
 if (valor>maior) {
maior=valor;
}
else if(valor<menor) {
menor=valor;
}
printf("Digite um valor(0 para sair): ");
scanf("%d", &valor);
}
printf("O maior valor lido foi: %d\n", maior);
printf("O menor valor lido foi: %d\n", menor);

    return 0;
}
