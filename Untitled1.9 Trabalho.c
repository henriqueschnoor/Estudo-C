//9 - Fa�a um programa que receba um valor que foi
//depositado e exiba o valor com rendimento ap�s um
//m�s. Considere fixo o juro da poupan�a em 0,70% a.
//m.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	float Deposito,Juros,Rendimento;
	printf("Entre com o valor do Deposito: ");
	scanf("%f",&Deposito);
	
	Juros = 0.007; 
	Rendimento = Deposito + (Deposito * Juros);
	
	printf("O valor em rendimento apos um mes foi:%.2f ",Rendimento);
	
}

