//23) Fa�a um programa que leia um n�mero N e imprima �F1�, �F2�
//ou �F3�, conforme a condi��o: � �F1�, se N <= 10
//� �F2�, se N > 10 e N <= 100
//� �F3�, se n > 100 
#include<stdio.h>
#include<locale.h>
int main() {
setlocale(LC_ALL,"");
int N;
printf("Digite um n�mero N: ");
scanf("%d", &N);
if (N <= 10) {
    printf("F1\n");
} 
else if (N <= 100) {
    printf("F2\n");
}
else {
    printf("F3\n");
    }
    return 0;
}
