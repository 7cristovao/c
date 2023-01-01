// Faça um programa C que leia dez números que
// representem as notas de dez alunos, e que apresente:
// a)	 a soma dos números;
// b)	 a média dos números;
// c)	 o maior número;
// d)	 o menor número.
// Assuma que as notas são informadas corretamente
// no intervalo de 1 a 10.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, cont;
    float num;
    float m;
    printf("Digite a quantidade de números: ");
    scanf("%d",&n);
    float s = 0;
    for(cont = 0; cont < n; cont++){
        printf("Digite um nº: ");
        scanf("%f", &num);
        s = s + num;
    }
    printf("Soma = %.2f\n", s);
    printf("Média = %.2f\n", s/n);
    return 0;
    exit(0);
}