//36) Foi realizada uma pesquisa de algumas características físicas
//da população de uma certa região, a qual coletou os seguintes
//dados referentes a cada habitante para serem analisados: sexo (1
//- masculino e 2 - feminino), cor dos olhos (1 - azuis, 2 - verdes, 3 -
//castanhos), cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos),
//idade.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int numHabitantes;
int i=0;
    printf("Quantos habitantes deseja registrar? ");
    scanf("%d", &numHabitantes);
    int sexo[numHabitantes];
    int olhos[numHabitantes];
    int cabelos[numHabitantes];
    int idade[numHabitantes];
    for ( i = 0; i < numHabitantes; i++) {
    printf("\nHabitante %d:\n", i + 1);
    printf("Sexo (1 - Masculino, 2 - Feminino): ");
    scanf("%d", &sexo[i]);

    printf("Cor dos olhos (1 - Azuis, 2 - Verdes, 3 - Castanhos): ");
    scanf("%d", &olhos[i]);

    printf("Cor dos cabelos (1 - Louros, 2 - Castanhos, 3 - Pretos): ");
    scanf("%d", &cabelos[i]);

    printf("Idade: ");
    scanf("%d", &idade[i]);
    }
    printf("\nInformações coletadas:\n");
    printf("Habitante | Sexo | Olhos | Cabelos | Idade\n");
    for (i = 0; i < numHabitantes; i++) {
    printf("%9d | %4d | %5d | %7d | %5d\n", i + 1, sexo[i], olhos[i], cabelos[i], idade[i]);
    }
    return 0;
}
