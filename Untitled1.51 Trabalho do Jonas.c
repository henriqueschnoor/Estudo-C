//51) Em uma elei��o presidencial existem quatro candidatos. Os
//votos s�o informados atrav�s de c�digos. Os dados utilizados
//para a contagem dos votos obedecem � seguinte codifica��o: -
//1,2,3,4 = voto para os respectivos candidatos; -5 = voto nulo; -6 =
//voto em branco; Elabore um algoritmo que leia o c�digo do
//candidato em um voto. Calcule e escreva: -total de votos para
//cada candidato; -total de votos nulos; - total de votos em branco;
//H� um total de 20 eleitores. 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int votos[5] = {0}; 
int total_eleitores = 20;
int i = 0;
    printf("Digite o c�digo do candidato (1, 2, 3, 4), 5 para voto nulo, 6 para voto em branco:\n");
for (i = 0; i < total_eleitores; i++) {
    int codigo;
    printf("Eleitor %d: ", i + 1);
    scanf("%d", &codigo);
switch (codigo) {
case 1:
case 2:
case 3:
case 4:
    votos[codigo - 1]++; 
        break;
case 5:
    votos[4]++; 
    break;
case 6:
    votos[5]++; 
    break;
      default:
printf("C�digo de voto inv�lido.\n");
 i--; 
}
}
printf("\nResultados da elei��o:\n");
for ( i = 0; i < 4; i++) {
    printf("Candidato %d: %d votos\n", i + 1, votos[i]);
}
printf("Votos nulos: %d\n", votos[4]);
printf("Votos em branco: %d\n", votos[5]);

    return 0;
}
