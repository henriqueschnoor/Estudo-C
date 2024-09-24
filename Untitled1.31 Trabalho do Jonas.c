//31. João tem 1,45 m de altura e Maria tem 1,57. João cresce 0,23m
//por ano enquanto Maria cresce 0,15m. Faça um algoritmo que
//mostre as alturas de João e Maria, ano a ano, até que João seja
//maior que Maria, respondendo no final quantos anos serão
//necessários para que João seja o mais alto dos dois. 
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
printf("\nAltura de João: %.2f", altura_joao);
printf("\nAltura de Maria: %.2f ", altura_maria);
printf("\nQuantidade de anos necessários para João ultrapassar a altura de Maria: %d", idade);
    return 0;
}
