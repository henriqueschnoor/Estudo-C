//50) Escreva um algoritmo em C que realize a multiplicação de A por
//B, ou seja, A * B, através de adições (somas). Esses dois valores
//são inseridos pelo usuário. EX: transformar 4*3 em 4+4+4.
#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
    int A, B;
    int resultado = 0;
    int i = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

for (i = 0; i < B; i++) {
    resultado += A;
    }
    printf("O resultado de %d * %d é: %d\n", A, B, resultado);

    return 0;
}
