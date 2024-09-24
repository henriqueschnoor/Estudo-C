//44) Foi feita uma pesquisa entre os 2000 habitantes de uma região
//para coletar os seguintes dados: sexo (0-feminino, 1-masculino),
//idade e altura. Faça um algoritmo que leia as informações
//coletadas e mostre as seguintes informações:
//a) média da idade do grupo;
//b) média da altura das mulheres;
//c) média da idade dos homens;
//d) percentual de pessoas com idade entre 18 e 35 anos.
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int i;
int habitantes = 2000;
int sexo, idade;
float altura;
int cont_mulheres = 0, cont_homens = 0;
float soma_idade_grupo = 0, soma_altura_mulheres = 0, soma_idade_homens = 0;
int cont_idade_entre_18_e_35 = 0;

for (i = 1; i <= habitantes; i++) {
    printf("Informe o sexo (0-feminino, 1-masculino) do habitante %d: ", i);
    scanf("%d", &sexo);
        
    printf("Informe a idade do habitante %d: ", i);
    scanf("%d", &idade);

    printf("Informe a altura do habitante %d (em metros): ", i);
    scanf("%f", &altura);

soma_idade_grupo += idade;

if (sexo == 0) {
    soma_altura_mulheres += altura;
    cont_mulheres++;
}
else {
    soma_idade_homens += idade;
    cont_homens++;
}
if (idade >= 18 && idade <= 35) {
    cont_idade_entre_18_e_35++;
}
}
    float media_idade_grupo = soma_idade_grupo / habitantes;
    float media_altura_mulheres = soma_altura_mulheres / cont_mulheres;
    float media_idade_homens = soma_idade_homens / cont_homens;
    float percentual_idade_entre_18_e_35 = (float)cont_idade_entre_18_e_35 / habitantes * 100;

    printf("a) Média da idade do grupo: %.2f\n", media_idade_grupo);
    printf("b) Média da altura das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("c) Média da idade dos homens: %.2f anos\n", media_idade_homens);
    printf("d) Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", percentual_idade_entre_18_e_35);

    return 0;
}
