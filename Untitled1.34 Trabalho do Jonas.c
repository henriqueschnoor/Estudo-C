//34) Crie um algoritmo que ajude o DETRAN a saber, o total de
//recursos que foram arrecadados com a aplica��o de multas de
//tr�nsito. O algoritmo deve ler as seguintes informa��es para cada
//motorista: o n�mero da carteira de motorista, n�mero de multas, o
//valor da cada uma das multas.
//Deve ser impresso o valor da d�vida de cada motorista e ao final
//da leitura o total de recursos arrecadados (somat�rio de todas as
//multas). O algoritmo dever� imprimir tamb�m o n�mero da
//carteira do motorista que obteve o maior n�mero de multas e se
//encerra quando o n�mero digitado da carteira de motorista for 0.
#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "");
int numeroCarteira;
int numeroMultas;
float valorMulta;
float totalArrecadado = 0.0;
int maiorNumeroMultas = 0;
int carteiraMaiorMultas = 0;
int i = 0;
    
while (1) {
    printf("Digite o n�mero da carteira de motorista (Digite 0 para encerrar): ");
    scanf("%d", &numeroCarteira);

if (numeroCarteira == 0) {
    break;
}
    printf("Digite o n�mero de multas para o motorista: ");
    scanf("%d", &numeroMultas);
float dividaMotorista = 0.0;

for (i=0; i < numeroMultas; i++) {
    printf("Digite o valor da multa %d: ", i + 1);
    scanf("%f", &valorMulta);
    dividaMotorista += valorMulta;
    totalArrecadado += valorMulta;
}
printf("A d�vida do motorista de carteira %d �: %.2f\n", numeroCarteira, dividaMotorista);
if (numeroMultas > maiorNumeroMultas) {
    maiorNumeroMultas = numeroMultas;
    carteiraMaiorMultas = numeroCarteira;
}
}
    printf("Total de recursos arrecadados: %.2f\n", totalArrecadado);
    printf("A carteira de motorista com mais multas � a de n�mero %d, com %d multas.\n", carteiraMaiorMultas, maiorNumeroMultas);
    return 0;
}
