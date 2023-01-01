// Escreva um programa para informar o valor de
// uma corrida de taxi que considere o valor mínimo
// da corrida. Ou seja, ao entrar no taxi, o cliente
// deve pagar um valor mínimo de R$ 3,50, mesmo
// que o tamanho da corrida seja inferior a esse valor.
// O programa deve considerar as informações do
// exercício anterior. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    // d: distância percorrida em km
    // v_1: valor calculado na bandeira 1
    // v_2: valor calculado na bandeira 2
    float d, v_1, v_2;
    int bandeira;
    printf("(1) para bandeira um: \n(2) para bandeira dois: \n");
    scanf("%d",&bandeira);
    printf("Digite a distância (em quilômetros): ");
    scanf("%f",&d);
    v_1 = d*1.80;
    v_2 = d*2.30;
    if(bandeira == 2 && v_2 <= 3.50){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", 3.50);
    }
    else if(bandeira == 1 && v_1 > 3.50){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", d*1.80);
    }
    else if(bandeira == 1 && v_1 <= 3.50){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", 3.50);
    }
    else if(bandeira == 2 && v_2 > 3.50){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", d*2.30);
    }
    else if(bandeira < 1 || bandeira >2){
        printf("Valor inválido!\nA bandeira deve ser 1 ou 2.\n");
    }
    else{
        printf("Valor inválido!\nA bandeira deve ser 1 ou 2.\n");
    }
    return 0;
    exit(0);
}