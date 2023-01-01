// Escreva um programa que informe o valor de uma
// corrida de taxi em Brasília. A diferença em relação
// ao exercício anterior é que alguns taxis oferecem um
// desconto de 30%. Altere o programa do exercício
// anterior para que solicite se a corrida possui ou não
// desconto de 30% (1 – sim, 2 – não).
#include<stdio.h>
#include<stdlib.h>
int main(){
    // d: distância percorrida em km
    // v_1: valor calculado na bandeira 1
    // v_2: valor calculado na bandeira 2
    float d, v_1, v_2;
    int bandeira, desconto;
    printf("(1) para bandeira um: \n(2) para bandeira dois: \n");
    scanf("%d",&bandeira);
    printf("Digite a distância (em quilômetros): ");
    scanf("%f",&d);
    v_1 = d*1.80;
    v_2 = d*2.30;
    printf("A corrida possui desconto? (1 - sim, 2 - não): ");
    scanf("%d",&desconto);
    if(bandeira == 2 && v_2 <= 3.50 && desconto == 2){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", 3.50);
    }
    else if(bandeira == 1 && v_1 > 3.50 && desconto == 2){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", d*1.80);
    }
    else if(bandeira == 1 && v_1 <= 3.50 && desconto == 2){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", 3.50);
    }
    else if(bandeira == 2 && v_2 > 3.50 && desconto == 2){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", d*2.30);
    }
    else if(bandeira == 2 && v_2 <= 3.50 && desconto == 1){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", 3.50*0.7);
    }
    else if(bandeira == 1 && v_1 > 3.50 && desconto == 1){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", d*1.80*0.7);
    }
    else if(bandeira == 1 && v_1 <= 3.50 && desconto == 1){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", 3.50*0.7);
    }
    else if(bandeira == 2 && v_2 > 3.50 && desconto == 1){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", d*2.30*0.7);
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
