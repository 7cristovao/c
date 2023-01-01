// Escreva um programa que informe o valor de uma
// corrida de taxi. Para calcular o valor da corrida é
// necessário saber a distância percorrida em quilômetros
// e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
// bandeira seja 1, o preço do quilometro percorrido é
// de R$ 1,80, se a bandeira for 2 o valor é de R$ 2,30.
// Escreva um programa em linguagem C que solicite a 
// distância percorrida em quilômetros e qual o tipo da
// bandeira da corrida e informe o valor da corrida.
#include<stdio.h>
#include<stdlib.h>
int main(){
    // d: distância percorrida em km
    float d;
    int bandeira;
    printf("(1) para bandeira um: \n(2) para bandeira dois: \n");
    scanf("%d",&bandeira);
    printf("Digite a distância (em quilômetros): ");
    scanf("%f",&d);
    if(bandeira == 1){
        printf("Bandeira 1.\nO valor da corrida é $%.2f\n", d*1.80);
    }
    else if(bandeira == 2){
        printf("Bandeira 2.\nO valor da corrida é $%.2f\n", d*2.30);
    }
    else{
        printf("Valor inválido!\nDigite 1 ou 2.\n");
    }

}
