/*Dados três números, elabore um programa em C
para verificar se eles formam um triângulo, caso
verdadeiro calcule a sua área.
Três números só podem ser comprimento dos lados de
um triângulo, se cada um deles for menor que a soma dos
outros dois.
A < (B+C) e B < (A+C) e C < (A+B)
Caso contrário, A, B, e C não formam os lados de um
triângulo. */
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Digite um número: ");
    scanf("%d",&a);
    printf("Digite outro número: ");
    scanf("%d",&b);
    printf("Digite mais um número: ");
    scanf("%d",&c);
    if(a < (b+c) && b < (a+c) && c < (a+b)){
        
    }
}