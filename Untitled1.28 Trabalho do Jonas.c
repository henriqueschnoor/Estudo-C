//28) Dado o dia da semana de 1 � 7, escreva na tela o
//correspondente por extenso (Domingo, Segunda-feira, ...,
//S�bado). 
#include<stdio.h>
#include<locale.h>
int main() {
int numerosemana;
setlocale(LC_ALL,"");
printf("Digite um n�mero entre 1 e 7: ");
scanf("%d", &numerosemana);

switch (numerosemana) {
case 1:
    printf("Domingo\n");
    break;
case 2:
    printf("Segunda-Feira\n");
    break;
case 3:
    printf("Ter��-Feira\n");
    break;
case 4:
    printf("Quarta-Feira\n");
    break;
case 5:
    printf("Quinta-Feira\n");
    break;
case 6:
    printf("Sexta-Feira\n");
    break;
case 7:
    printf("Sabado\n");
    break;
    default:
printf("Numero N�o existe da semana com esse n�mero.\n");
}
return 0;
}
