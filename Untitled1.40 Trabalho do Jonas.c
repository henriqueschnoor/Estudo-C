//40) Foi feita uma pesquisa entre os habitantes de uma região. Foram
//coletados os dados de idade, sexo (1-masculino / 2-feminino) e
//salário. Faça um algoritmo que informe:
//a) a média de salário do grupo;
//b) a porcentagem de mulheres do grupo com idade entre 18 e 25
//anos;
//c) quantidade de mulheres com salário até R$1500,00.
//Há um total de 1000 habitantes.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i = 0;
int totalHabitantes = 1000;
int contadorMulheres18a25 = 0;
int contadorMulheresSalarioBaixo = 0;
float somaSalarios = 0.0;
for ( i = 0; i < totalHabitantes; i++) {
int idade, sexo;
float salario;
    printf("Digite a idade do habitante %d: ", i + 1);
    scanf("%d", &idade);
        
    printf("Digite o sexo do habitante %d (1-Masculino / 2-Feminino): ", i + 1);
    scanf("%d", &sexo);

    printf("Digite o salário do habitante %d: R$", i + 1);
    scanf("%f", &salario);

    somaSalarios += salario;
if (sexo == 2 && idade >= 18 && idade <= 25) {
    contadorMulheres18a25++;
}
if (sexo == 2 && salario <= 1500.0) {
    contadorMulheresSalarioBaixo++;
}
}
float mediaSalarios = somaSalarios / totalHabitantes;
float porcentagemMulheres18a25 = (float)contadorMulheres18a25 / totalHabitantes * 100.0;

    printf("Média de salário do grupo: R$%.2f\n", mediaSalarios);
    printf("Porcentagem de mulheres com idade entre 18 e 25 anos: %.2f%%\n", porcentagemMulheres18a25);
    printf("Quantidade de mulheres com salário até R$1500,00: %d\n", contadorMulheresSalarioBaixo);

    return 0;
}
