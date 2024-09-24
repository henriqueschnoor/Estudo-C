//43) Faça um algoritmo que leia as três notas de 50 alunos de uma
//turma. Para cada aluno, calcule a média ponderada, como segue:
//MP = ( n1*2 + n2*4 + n3*3 ) / 10. Além disso, calcule a média geral
//da turma. Mostre a média de cada aluno e uma mensagem
//"Aprovado", caso a média seja maior ou igual a sete, e uma
//mensagem "Reprovado", caso contrário. Ao final, mostre a média
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
    
printf("\nMédias dos alunos e situação:\n");
for ( i = 0; i < num_alunos; i++) {
    printf("\nAluno %d - Média: %.2f - ", i + 1, medias[i]);
    
if (medias[i] >= 7.0) {
    printf("Aprovado\n");
} 
else {
    printf("Reprovado\n");
        }
    }
    printf("\nMédia geral da turma: %.2f\n", media_geral);

    return 0;
}
