//17) Em uma escola, o aluno faz duas provas por período, com as
//notas variando de 0 a 10. Caso a média aritmética das duas notas
//seja 5 ou mais, ele passa de ano, senão, ele é reprovado. Faça um
//programa que escreva as duas notas de um aluno e escreva se
//ele passou ou não de ano. 
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float nota1,nota2,media;
	printf("Entre com nota 1: ");
	scanf("%f", &nota1);
	printf("Entre com nota 2: ");
	scanf("%f", &nota2);
	media=(nota1+nota2)/2;
	if (media >= 5){
		printf("Parabens Você Foi Aprovado!%.2f.", media);
	}
	else {
		printf("Você Foi Reprovado!%.2f.", media);
	}
	return 0;
}
