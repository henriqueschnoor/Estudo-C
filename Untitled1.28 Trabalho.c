//28) Dado o dia da semana de 1 à 7, escreva na tela o
//correspondente por extenso (Domingo, Segunda-feira, ...,
//Sábado). 
#include<stdio.h>
#include<locale.h>
int main() {
int numerosemana;
setlocale(LC_ALL,"");
printf("Digite um número entre 1 e 7: ");
scanf("%d", &numerosemana);

switch (numerosemana) {
case 1:
    printf("Domingo\n");
    break;
case 2:
    printf("Segunda-Feira\n");
    break;
case 3:
    printf("Terçã-Feira\n");
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
printf("Numero Não existe da semana com esse número.\n");
}
return 0;
}
