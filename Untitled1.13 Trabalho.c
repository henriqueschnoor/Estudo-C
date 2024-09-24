//13) Faça um programa que receba um número e diga se este
//número está no intervalo entre 100 e 200.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
 int valor;
printf("\nEntre entre com um numero: ");
scanf("%d", &valor);
if(valor >= 100 && valor <= 200){
printf("\nEste numero %d está no intervalo entre 100 a 200.\n", valor);
}else{
printf("\nEste numero %d não está no intervalo entre 100 a 200.\n", valor);
 }
 return 0;
}
