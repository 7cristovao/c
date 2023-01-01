//Escreva um programa para informar o valor de
//uma corrida de taxi que considere o valor mínimo
//da corrida. Ou seja, ao entrar no taxi, o cliente deve
//pagar um valor mínimo de R$ 3,50, independente do
//tamanho da corrida. O programa deve considerar as
//informações do exercício anterior.

#include <stdio.h>

int main(){
    int distanciaPercorrida;
    int bandeira;
    int taxaMinima;
    taxaMinima = 3.50;
    printf("ATENCAO: a taxa minima eh de R$ 3,50");
    printf("\nDigite a distancia percorrida: ");
    scanf("%d",&distanciaPercorrida);
    printf("\nDigite a bandeira: ");
    scanf("%d",&bandeira);
    if (bandeira == 1){
        if ((distanciaPercorrida*1.80) < 3.50){
            printf("\nO valor da corrida eh de R$ %.2f \n",distanciaPercorrida*1.80+taxaMinima);
        }else{
            printf("\nO valor da corrida eh de R$ %.2f \n", distanciaPercorrida*1.80);
        }
    }
    else if (bandeira == 2){
        if ((distanciaPercorrida*1.80) < 3.50){
            printf("\nO valor da corrida eh de R$ %.2f \n", distanciaPercorrida*2.30+taxaMinima);
        }else{
            printf("\nO valor da corrida eh de R$ %.2f \n", distanciaPercorrida*2.30);
        }
    }
    else{
        printf("Dados invalidos");
    }
}
