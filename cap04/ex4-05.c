// Escreva um programa em C que calcule o volume de
// um cilindro circular, dados o seu raio e sua altura.
// Observação: V = πx r2 x h, em que π=3,14, r = raio
// e h = altura.
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    // V: volume // π: pi // r: raio // h: altura
    float V, r, h, M_PI;
    M_PI = 3.14159265358979323846;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Digite a altura: ");
    scanf("%f", &h);
    V = M_PI * (r * r) * h;
    printf("\nO volume do cilindro é: %f\n", V); 
    return 0;
    exit(0);
}