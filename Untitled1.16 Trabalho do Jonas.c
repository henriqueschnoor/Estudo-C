//16) Fa�a um programa que receba o valor do sal�rio de uma pessoa
//e o valor de um financiamento pretendido. Caso o financiamento
//seja menor ou igual a 5 vezes o sal�rio da pessoa, o programa
//dever� escrever �Financiamento Concedido�, sen�o, escrever�
//�Financiamento Negado�. Independente de conceder ou n�o o
//financiamento, o programa escrever� depois a frase �Obrigada
//por nos consultar�.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float Salario, Financiamento;
    printf("\nDigite seu sal�rio para consultar o financiamento: ");
    scanf("%f", &Salario);
    printf("Digite o valor do financiamento: ");
    scanf("%f", &Financiamento);
    if (Financiamento<=5*Salario) {
        printf("\nFinanciamento Concedido.\n%.2f\n", Financiamento); 
    } else {
        printf("\nFinanciamento Negado.\n%.2f\n", Financiamento); 
    }
    printf("Obrigado por nos consultar.\n"); 

    return 0;
}
