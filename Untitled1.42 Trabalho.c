//42) Escreva um algoritmo que gere o n�meros de 1000 a 1999 e
//escreva aqueles que dividido por 11 d�o resto igual a 5.
#include<stdio.h>
#include<locale.h>
int main() {
	int numero = 1000;
	setlocale(LC_ALL,"");
    printf("N�meros de 1000 a 1999 que divididos por 11 t�m resto igual a 5:\n");
    for (numero = 1000; numero <= 1999; numero++) {
    if (numero % 11 == 5) {
        printf("%d\n", numero);
}
}
    return 0;
}
