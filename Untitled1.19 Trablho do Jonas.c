//19) Faça um programa que leia o nome e idade de duas pessoas e
//imprima o nome da pessoa mais nova, e seu ano de nascimento
//(o programa deve funcionar corretamente para qualquer que seja
//o ano atual. Desconsidere idades iguais). 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<locale.h>
int main() {
char nome1[50], nome2[50];
int idade1, idade2;
int anoAtual = 0;
setlocale(LC_ALL,"");
time_t t = time(NULL);
struct tm tm = *localtime(&t);
anoAtual = tm.tm_year + 1900;

printf("Coloque o nome da primeira pessoa: ");
scanf("%s", nome1);
printf("Coloque a idade da primeira pessoa: ");
scanf("%d", &idade1);
printf("Coloque o nome da segunda pessoa: ");
scanf("%s", nome2);
printf("Coloque a idade da segunda pessoa: ");
scanf("%d", &idade2);

if (idade1 < idade2) {
printf("%s é a pessoa mais nova.\n", nome1);
printf("Ano de nascimento: %d\n", anoAtual-idade1);
} else if (idade2 < idade1) {
 printf("%s é a pessoa mais nova.\n", nome2);
printf("Ano de nascimento: %d\n", anoAtual-idade2);
} else {
printf("As idades são iguais.\n");
}
     
return 0;
}
