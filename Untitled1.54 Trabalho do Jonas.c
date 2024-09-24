#include <stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
    int valor;
    int dentrointervalo = 0;
    int foraintervalo = 0;
    int i = 0;
    printf("Digite 10 valores:\n");

    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentrointervalo++;
        } else {
            foraintervalo++;
        }
    }

    printf("Quantidade de valores dentro do intervalo [10,20]: %d\n", dentrointervalo);
    printf("Quantidade de valores fora do intervalo [10,20]: %d\n", foraintervalo);

    return 0;
}
