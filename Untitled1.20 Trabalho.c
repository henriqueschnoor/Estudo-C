//20) Em uma escola, um aluno passa direto se obtiver m�dia final
//maior ou igual a 7. Se a m�dia for inferior a 4, ele est� reprovado
//direto, sem direito a prova final. Em outro caso, ele vai � final, e a
//nota que ele precisa para passar � o que falta � m�dia final para
//completar 10. Fa�a um programa que receba as duas notas
//parciais, calcule a m�dia final e informe ao aluno sua situa��o.
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
 printf("\nparab�ns voc� passou direto!%.2f", media);
 }
 else if (media < 4) {
 printf("\nVoc� foi reprovada(a) direto!%.2f", media);
 }
 else  {

 printf("Voc� foi para a final.\n Precisa tirar %.2f na prova final para ser aprovado(a).\n", notaFinalNecessaria);
 
}
}
