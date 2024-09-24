//37) Faça um algoritmo que determine e escreva: a maior idade
//dos habitantes, a quantidade de indivíduos do sexo feminino cuja
//idade está entre 18 e 35 anos inclusive e que tenham olhos verdes
//e cabelos louros.
//A pesquisa se encerra quando a idade digitada for negativa. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int idade, sexo, olhos, cabelos;
int maiorIdade = -1; 
int contadorMulheresVerdesLouros = 0;
while (1) {
  printf("Digite a idade (ou um número negativo para encerrar a pesquisa): ");
  scanf("%d", &idade);
    if (idade < 0) {
    break; 
    }
    printf("Digite o sexo (1 - Masculino, 2 - Feminino): ");
    scanf("%d", &sexo);

    printf("Digite a cor dos olhos (1 - Azuis, 2 - Verdes, 3 - Castanhos): ");
    scanf("%d", &olhos);

    printf("Digite a cor dos cabelos (1 - Louros, 2 - Castanhos, 3 - Pretos): ");
    scanf("%d", &cabelos);
        
    if (idade > maiorIdade) {
    maiorIdade = idade;
        }
    if (sexo == 2 && idade >= 18 && idade <= 35 && olhos == 2 && cabelos == 1) {
    contadorMulheresVerdesLouros++;
}
}
 printf("Maior idade entre os habitantes: %d anos\n", maiorIdade);
 return 0;
}
