//18) Dois carros percorreram diferentes dist�ncias em diferentes
//tempos. Sabendo que a velocidade m�dia � a raz�o entre a
//dist�ncia percorrida e o tempo levado para percorr�-la, fa�a um
//programa que leia as dist�ncias que cada carro percorreu e o
//tempo que cada um levou, e indique o carro que teve maior
//velocidade m�dia (desconsidere velocidades iguais). 
#include<stdio.h>
#include<locale.h>
int main(){
float distanciaCarro1, tempoCarro1, velocidadeMediaCarro1;
float distanciaCarro2, tempoCarro2, velocidadeMediaCarro2;
setlocale(LC_ALL,"");
printf("Digite a dist�ncia percorrida pelo primeiro carro: ");
scanf("%f", &distanciaCarro1);
printf("Digite o tempo levado pelo primeiro carro: ");
scanf("%f", &tempoCarro1);
velocidadeMediaCarro1 = distanciaCarro1 / tempoCarro1;
printf("Digite a dist�ncia percorrida pelo segundo carro: ");
scanf("%f", &distanciaCarro2);
printf("Digite o tempo levado pelo segundo carro: ");
scanf("%f", &tempoCarro2);
velocidadeMediaCarro2 = distanciaCarro2 / tempoCarro2;
if (velocidadeMediaCarro1 > velocidadeMediaCarro2) {
printf("O primeiro carro foi mais r�pido.\n");
} 
else if (velocidadeMediaCarro2 > velocidadeMediaCarro1) {
printf("O segundo carro foi mais r�pido.\n");
} 
else{
printf("Os carros tiveram a mesma velocidade m�dia.\n");
    }

}
