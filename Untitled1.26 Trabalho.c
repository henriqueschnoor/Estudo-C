#include<stdio.h>
#include<locale.h>
int main() {
int num1, num2, operacao;
int resultado;
setlocale(LC_ALL,"");

printf("Digite o primeiro n�mero: ");
scanf("%d", &num1);

printf("Digite o segundo n�mero: ");
scanf("%d", &num2);

printf("Escolha a opera��o:\n");
printf("1 - Adi��o\n");
printf("2 - Subtra��o\n");
printf("3 - Multiplica��o\n");
printf("4 - Divis�o\n");
printf("Digite o n�mero da opera��o desejada: ");
scanf("%d", &operacao);

switch (operacao) {
    case 1:
        resultado = num1 + num2;
        printf("Resultado da adi��o: %d\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtra��o: %d\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplica��o: %d\n", resultado);
        break;
    case 4:
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado da divis�o: %d\n", resultado);
} 
		else {
            printf("N�o � poss�vel dividir por zero.\n");
}
        break;
        default:
printf("Opera��o inv�lida.\n");
    }

    return 0;
}
