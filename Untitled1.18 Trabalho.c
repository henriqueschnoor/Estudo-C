//18) Dois carros percorreram diferentes distâncias em diferentes
//tempos. Sabendo que a velocidade média é a razão entre a
//distância percorrida e o tempo levado para percorrê-la, faça um
//programa que leia as distâncias que cada carro percorreu e o
//tempo que cada um levou, e indique o carro que teve maior
//velocidade média (desconsidere velocidades iguais). 
#include<stdio.h>
#include<locale.h>
int main(){
float distanciaCarro1, tempoCarro1, velocidadeMediaCarro1;
float distanciaCarro2, tempoCarro2, velocidadeMediaCarro2;
setlocale(LC_ALL,"");
printf("Digite a distância percorrida pelo primeiro carro: ");
scanf("%f", &distanciaCarro1);
printf("Digite o tempo levado pelo primeiro carro: ");
scanf("%f", &tempoCarro1);
velocidadeMediaCarro1 = distanciaCarro1 / tempoCarro1;
printf("Digite a distância percorrida pelo segundo carro: ");
scanf("%f", &distanciaCarro2);
printf("Digite o tempo levado pelo segundo carro: ");
scanf("%f", &tempoCarro2);
velocidadeMediaCarro2 = distanciaCarro2 / tempoCarro2;
if (velocidadeMediaCarro1 > velocidadeMediaCarro2) {
printf("O primeiro carro foi mais rápido.\n");
} 
else if (velocidadeMediaCarro2 > velocidadeMediaCarro1) {
printf("O segundo carro foi mais rápido.\n");
} 
else{
printf("Os carros tiveram a mesma velocidade média.\n");
    }

}
