//31. Jo�o tem 1,45 m de altura e Maria tem 1,57. Jo�o cresce 0,23m
//por ano enquanto Maria cresce 0,15m. Fa�a um algoritmo que
//mostre as alturas de Jo�o e Maria, ano a ano, at� que Jo�o seja
//maior que Maria, respondendo no final quantos anos ser�o
//necess�rios para que Jo�o seja o mais alto dos dois. 
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float altura_joao = 1.45, altura_maria = 1.57;
int idade = 0;
while( altura_joao <= altura_maria ){
altura_joao += 0.23;
altura_maria += 0.15;
idade++;
}
printf("\nAltura de Jo�o: %.2f", altura_joao);
printf("\nAltura de Maria: %.2f ", altura_maria);
printf("\nQuantidade de anos necess�rios para Jo�o ultrapassar a altura de Maria: %d", idade);
    return 0;
}
