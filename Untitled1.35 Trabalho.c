//35) Faça um algoritmo que leia vários números e informe quantos
//desses números entre 100 e 200 foram digitados. Quando o valor
//0 (zero) for lido o algoritmo deverá cessar sua execução.
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
