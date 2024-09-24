#include<stdio.h>
#include<locale.h>
int main() {
int num1, num2, operacao;
int resultado;
setlocale(LC_ALL,"");

printf("Digite o primeiro número: ");
scanf("%d", &num1);

printf("Digite o segundo número: ");
scanf("%d", &num2);

printf("Escolha a operação:\n");
printf("1 - Adição\n");
printf("2 - Subtração\n");
printf("3 - Multiplicação\n");
printf("4 - Divisão\n");
printf("Digite o número da operação desejada: ");
scanf("%d", &operacao);

switch (operacao) {
    case 1:
        resultado = num1 + num2;
        printf("Resultado da adição: %d\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtração: %d\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplicação: %d\n", resultado);
        break;
    case 4:
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divisão: %d\n", resultado);
} 
		else {
            printf("Não é possível dividir por zero.\n");
}
        break;
        default:
printf("Operação inválida.\n");
    }

    return 0;
}
