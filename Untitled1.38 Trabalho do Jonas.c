//38) Crie um algoritmo que o usu�rio entre com v�rios n�meros
//inteiros e positivos e imprima o produto dos n�meros �mpares e a
//soma dos n�meros pares. O Algoritmo acaba quando o valor 0 for
//digitado. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int numero;
int produtoImpares= 1; 
int somaPares= 0;
printf("Digite n�meros inteiros e positivos (Digite 0 para encerrar):\n");
while (1) {
scanf("%d", &numero);
if (numero == 0) {
    break; 
}
if (numero % 2 == 0) {
            
 somaPares += numero;
}
else {
produtoImpares *= numero;
}
}
printf("n�meros �mpares: %lld\n", produtoImpares);
printf("Soma dos n�meros pares: %d\n", somaPares);
return 0;
}
