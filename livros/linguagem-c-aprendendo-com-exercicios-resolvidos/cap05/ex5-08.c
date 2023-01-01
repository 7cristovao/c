//Escreva um programa para informar o valor de
//uma corrida de taxi. Para calcular o valor da corrida
//é necessário saber a distância percorrida em
//quilômetros e qual o tipo da bandeira da corrida, 1
//ou 2. Caso a bandeira seja 1, o preço do quilômetro
//rodado é de R$ 1,80, se a bandeira for 2 o valor
//do quilômetro rodado é de R$ 2,30. Escreva um
//programa em linguagem C que solicite a distância
//percorrida em quilômetros e qual o tipo da bandeira
//da corrida e informe o valor da corrida.

#include <stdio.h>

int main(){
    int distanciaPercorrida;
    int bandeira;
    printf("Digite a distancia percorrida: ");
    scanf("%d",&distanciaPercorrida);
    printf("\nDigite o tipo da bandeira da corrida: ");
    scanf("%d",&bandeira);
    if (bandeira == 1){
        printf("\nO valor da corrida eh de R$ %.2f \n", distanciaPercorrida*1.80);
    }
    else if (bandeira == 2){
        printf("\nO valor da corrida eh de R$ %.2f \n", distanciaPercorrida*2.30);
    }
    else{
        printf("\nDados invalidos \n");
    }
}
