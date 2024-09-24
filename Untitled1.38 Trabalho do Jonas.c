//38) Crie um algoritmo que o usuário entre com vários números
//inteiros e positivos e imprima o produto dos números ímpares e a
//soma dos números pares. O Algoritmo acaba quando o valor 0 for
//digitado. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int numero;
int produtoImpares= 1; 
int somaPares= 0;
printf("Digite números inteiros e positivos (Digite 0 para encerrar):\n");
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
printf("números ímpares: %lld\n", produtoImpares);
printf("Soma dos números pares: %d\n", somaPares);
return 0;
}
