//33) A prefeitura de uma cidade deseja fazer uma pesquisa
//com seus habitantes. Fa�a um algoritmo para coletar
//dados sobre o sal�rio e n�mero de filhos de cada
//l�rio da popula��o, a m�dia do n�mero de filhos, o
//maior sal�rio dos habitantes, o percentual de pessoas
//com sal�rio menor que R$ 2000,00. O algoritmo acaba
//quando o sal�rio digitado for zero
#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"");
float salario, somaSalario = 0, maiorSalario = 0;
int numeroFilhos, somaFilhos = 0, totalHabitantes = 0, salarioMenor2000 = 0;
do {
printf("Digite o salario do habitante (digite 0 para encerrar): ");
scanf("%f", &salario);
if (salario != 0) 
{
printf("Digite o numero de filhos do habitante: ");
scanf("%d", &numeroFilhos);
somaSalario += salario;
somaFilhos += numeroFilhos;
totalHabitantes++;
if (salario > maiorSalario)
{
maiorSalario = salario;
}
if (salario < 2000) 
{
salarioMenor2000++;
}
}
} 
while (salario != 0);
if (totalHabitantes > 0) 
{
float mediaSalario = somaSalario / totalHabitantes;
float mediaFilhos = somaFilhos / totalHabitantes;
float percentualMenor2000 = (salarioMenor2000 / (float)totalHabitantes) * 100;
  printf("\nMedia de salario da populacao: %.2f", mediaSalario);
  printf("\nMaior salario dos habitantes: %.2f", maiorSalario);
  printf("\nPercentual de pessoas com salario menor que R$ 2000,00: %.2f%%", percentualMenor2000);
} 
else 
{
  printf("\nNenhum habitante foi cadastrado.");
}

   return 0;
}
