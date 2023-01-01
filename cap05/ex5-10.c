//Escreva um programa para informar o valor de
//uma corrida de taxi em Brasília. A diferença com o
//exercício anterior é que alguns taxis oferecem um
//desconto de 30 %. Altere o programa do exercício
//anterior para que ele solicite se a corrida possui ou
//não desconto de 30% (1 – sim, 2 – não).

#include <stdio.h>

int main(){
    int distanciaPercorrida;
    int bandeira;
    int desconto;
    float taxaDeDesconto;
    float taxaMinimaDeEmbarque;
    taxaMinimaDeEmbarque = 3.50;
    taxaDeDesconto = 0.70;
    printf("ATENCAO: a taxa de embarque eh de R$ 3,50");
    printf("\nDigite a distancia percorrida: ");
    scanf("%d",&distanciaPercorrida);
    printf("\nDigite a bandeira: ");
    scanf("%d",&bandeira);
    printf("\nCorrida possui desconto? [1 - sim, 2 - nao]: ");
    scanf("%d",&desconto);
    if(bandeira == 1 && desconto == 2){
        if (distanciaPercorrida*1.80 < taxaMinimaDeEmbarque){
            printf("Sem desconto. O valor da corrida eh de R$ %.2f \n",distanciaPercorrida*1.80+taxaMinimaDeEmbarque);
        }else{
            printf("Sem desconto. O valor da corrida eh de R$ %.2f \n",distanciaPercorrida*1.80);
        }
    }
    else if (bandeira == 2 && desconto == 2){
        if (distanciaPercorrida*2.30 < taxaMinimaDeEmbarque){
            printf("Sem desconto. O valor da corrida eh de R$ %.2f \n",distanciaPercorrida*2.30+taxaMinimaDeEmbarque);
        }else{
            printf("Sem desconto. O valor da corrida eh de R$ %.2f \n",distanciaPercorrida*2.30);
        }
    }
    else if (bandeira == 1 && desconto == 1){
        if (distanciaPercorrida*1.80 < taxaMinimaDeEmbarque){
            printf("Desconto de 30 porcento. O valor da corrida eh de R$ %.2f \n",(distanciaPercorrida*1.80+taxaMinimaDeEmbarque)*taxaDeDesconto);
        }else{
            printf("Desconto de 30 porcento. O valor da corrida eh de R$ %.2f \n",(distanciaPercorrida*1.80)*taxaDeDesconto);
        }
    }
    else if (bandeira == 2 && desconto == 1){
        if (distanciaPercorrida*2.30 < taxaMinimaDeEmbarque){
            printf("Desconto de 30 porcento. O valor da corrida eh de R$ %.2f \n",(distanciaPercorrida*2.30+taxaMinimaDeEmbarque)*taxaDeDesconto);
        }else{
            printf("Desconto de 30 porcento. O valor da corrida eh de R$ %.2f \n",(distanciaPercorrida*2.30)*taxaDeDesconto);
        }
    }
}
