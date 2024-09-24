//25) A partir do exercício anterior, pergunte ao usuário se deseja os
//numerais em inglês ou português. 
#include<stdio.h>
#include<locale.h>
int main() {
int numero,idioma;
setlocale(LC_ALL,"");

printf("Escolha um idioma:\n");
printf("1 = Português\n");
printf("2 = Inglês\n");
printf("Digite o número do idioma desejado: ");
scanf("%d", &idioma);

printf("Digite um número entre 0 e 5: ");
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
    printf("Três\n");
    break;
case 4:
    printf("Quatro\n");
    break;
case 5:
    printf("Cinco\n");
    break;
    default:
    printf("Número fora do intervalo válido.\n");
        }
    }
 else if (idioma == 2) { // Inglês
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
    printf("Opção de idioma inválida.\n");
}

return 0;
}
