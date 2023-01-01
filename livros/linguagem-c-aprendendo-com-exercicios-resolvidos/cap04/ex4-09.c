// Escreva um programa em C que calcule o volume de
// dois cilindros circulares e que verifique qual deles é
// maior. O raio e altura dos cilindros serão informados
// pelo usuário. Observação: Vπx r2 x h, em que π=3,14,
// r = raio e h = altura
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    // V_1: volume cilindro 1 // π: pi // r_1: raio cilindro 1 
    // h_1: altura cilindro 1
    // V_2: volume cilindro 2 // π: pi // r_2: raio cilindro 2 
    // h_2: altura cilindro 2
    float V_1, M_PI, r_1, h_1; // dados do primeiro cilindro
    float V_2, r_2, h_2; // dados do segundo cilindro
    M_PI = 3.14;
    printf("Digite o raio do primeiro cilindro: ");
    scanf("%f",&r_1);
    printf("Digite a altura do primeiro cilindro: ");
    scanf("%f",&h_1);
    printf("Digite o raio do segundo cilindro: ");
    scanf("%f",&r_2);
    printf("Digite a altura do segundo cilindro: ");
    scanf("%f",&h_2);
    V_1 = M_PI * (r_1 * r_1) * h_1;
    V_2 = M_PI * (r_2 * r_2) * h_2;
    if(V_1 > V_2){
        printf("O 1º cilindro é maior que o 2º\n");
    }
    else if(V_2 > V_1){
        printf("O 2º cilindro é maior que o 1º\n");
    }
    else{
        printf("Os dois cilindros são iguais\n");
    }
    return 0;
    exit(0);
}