//43) Fa�a um algoritmo que leia as tr�s notas de 50 alunos de uma
//turma. Para cada aluno, calcule a m�dia ponderada, como segue:
//MP = ( n1*2 + n2*4 + n3*3 ) / 10. Al�m disso, calcule a m�dia geral
//da turma. Mostre a m�dia de cada aluno e uma mensagem
//"Aprovado", caso a m�dia seja maior ou igual a sete, e uma
//mensagem "Reprovado", caso contr�rio. Ao final, mostre a m�dia
//geral.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int num_alunos = 50;
int i = 0;
float notas[num_alunos][3]; 
float medias[num_alunos];   
float media_geral = 0.0;
for ( i = 0; i < num_alunos; i++) {
printf("\nDigite as notas do aluno %d (n1 n2 n3): \n", i + 1);
scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10;

media_geral += medias[i];
}
media_geral /= num_alunos;
    
printf("\nM�dias dos alunos e situa��o:\n");
for ( i = 0; i < num_alunos; i++) {
    printf("\nAluno %d - M�dia: %.2f - ", i + 1, medias[i]);
    
if (medias[i] >= 7.0) {
    printf("Aprovado\n");
} 
else {
    printf("Reprovado\n");
        }
    }
    printf("\nM�dia geral da turma: %.2f\n", media_geral);

    return 0;
}
