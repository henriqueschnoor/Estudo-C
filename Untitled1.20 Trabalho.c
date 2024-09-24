//20) Em uma escola, um aluno passa direto se obtiver média final
//maior ou igual a 7. Se a média for inferior a 4, ele está reprovado
//direto, sem direito a prova final. Em outro caso, ele vai à final, e a
//nota que ele precisa para passar é o que falta à média final para
//completar 10. Faça um programa que receba as duas notas
//parciais, calcule a média final e informe ao aluno sua situação.
//Inclusive informando a ele quanto precisa tirar na final, se este for
//o seu caso.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
 float x, y, media, notaFinalNecessaria;
 setlocale(LC_ALL,"");
 printf("\nEntre com primeira nota: ");
 scanf("%f",&x);
 printf("\nEntre com a segunda nota: ");
 scanf("%f", &y);
 media = ( x + y )/2;
 notaFinalNecessaria = 10 - media;
  if (media >= 7) {
 printf("\nparabéns vocé passou direto!%.2f", media);
 }
 else if (media < 4) {
 printf("\nVocê foi reprovada(a) direto!%.2f", media);
 }
 else  {

 printf("Você foi para a final.\n Precisa tirar %.2f na prova final para ser aprovado(a).\n", notaFinalNecessaria);
 
}
}
