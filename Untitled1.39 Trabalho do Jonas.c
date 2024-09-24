//39) Escrever um algoritmo que leia um valor para uma variável n.
//Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada
//na forma:
//1 x n = n
//2 x n = 2n
//3 x n = 3n
//.......
//10 x n = 10n
#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"");
int n;
int resultado;
int i = 1;
printf("Digite um valor para N: ");
scanf("%d", &n);
printf("Tabuada de %d:\n", n);
for (i = 1; i <= 10; i++) {
resultado = i * n;
printf("%d x %d = %d\n", i, n, resultado);
}
   return 0;
}
