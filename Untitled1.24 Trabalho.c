//24) Recebidos valores num�ricos entre zero e cinco, escreva-os na
//forma literal.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int x;
 printf("\nEntre com o primeiro numero: ");
 scanf("%d",&x);

switch (x) {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("Um\n");
        break;
    case 2:
        printf("Dois\n");
        break;
    case 3:
        printf("Tr�s\n");
        break;
    case 4:
        printf("Quatro\n");
        break;
    case 5:
        printf("Cinco\n");
        break;
    default:
    printf("N�mero fora do intervalo v�lido.\n");
    }
}
