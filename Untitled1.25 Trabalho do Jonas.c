//25) A partir do exerc�cio anterior, pergunte ao usu�rio se deseja os
//numerais em ingl�s ou portugu�s. 
#include<stdio.h>
#include<locale.h>
int main() {
int numero,idioma;
setlocale(LC_ALL,"");

printf("Escolha um idioma:\n");
printf("1 = Portugu�s\n");
printf("2 = Ingl�s\n");
printf("Digite o n�mero do idioma desejado: ");
scanf("%d", &idioma);

printf("Digite um n�mero entre 0 e 5: ");
scanf("%d", &numero);

if (idioma == 1) {
 switch (numero) {
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
 else if (idioma == 2) { // Ingl�s
    switch (numero) {
case 0:
    printf("Zero\n");
    break;
case 1:
    printf("One\n");
    break;
case 2:
    printf("Two\n");
    break;
case 3:
    printf("Three\n");
    break;
case 4:
    printf("Four\n");
    break;
case 5:
    printf("Five\n");
    break;
    default:
    printf("Number out of valid range.\n");
}
}
 else {
    printf("Op��o de idioma inv�lida.\n");
}

return 0;
}
