#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
    int numalunos = 40;
    float notas[numalunos];
    float somanotas = 0;
    int i = 0;
    printf("Digite as notas dos %d alunos:\n", numalunos);
    
    for (i = 0; i < numalunos; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        somanotas += notas[i];
    }
    float media = somanotas / numalunos;
    printf("A média aritmética das notas dos %d alunos é %.2f\n", numalunos, media);

    return 0;
}
