//35) Fa�a um algoritmo que leia v�rios n�meros e informe quantos
//desses n�meros entre 100 e 200 foram digitados. Quando o valor
//0 (zero) for lido o algoritmo dever� cessar sua execu��o.
#include<stdio.h> 
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
int numero;
int contagem;
printf("\nEntre com numeros (Digite 0 se quer sair): \n");
 while (1) {
    scanf("%d", &numero);
if (numero == 0) {
    break; 
        }
if (numero >= 100 && numero <= 200) {
    contagem++;
        }
    }
printf("Os numeros digitados entre 100 a 200:%.2d\n ", contagem);
return 0;
}
