#include <stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int numeros[50];
int somatorionegativos = 0;
int i = 0;
printf("Digite 50 n�meros inteiros:\n");

for (i = 0; i < 50; i++) {
printf("N�mero %d: ", i + 1);
scanf("%d", &numeros[i]);
    
if (numeros[i] < 0) {
    somatorionegativos += numeros[i];
}
}
    printf("O somat�rio dos n�meros negativos �: %d\n", somatorionegativos);

    return 0;
}
