// Uma frutaria vende frutas com a seguinte tabela de
// preços:
// Até 5 Kg                Acima de 5 Kg
// Morango: R$ 7,50 p/Kg   R$ 5,30 p/Kg
// Maçã: R$ 3,50 p/Kg      R$ 2,80 p/Kg
// Se o cliente comprar menos de 5 kg de frutas e o valor
// total da compra ultrapassar R$ 19,00, receberá um
// desconto de 8% sobre o total. Escreva um programa
// em C para ler a quantidade (em Kg) de morangos e
// a de maçãs (em Kg) e que informe o valor a ser pago
// pelo cliente.
#include<stdio.h>
#include<stdlib.h>
int main(){
    float total,morango,maca,pesototal,totalmaca,totalmorango;
    printf("Qual a quantidade de maçãs (em kg)? ");
    scanf("%f",&maca);
    printf("Qual a quantidade de morangos (em kg)? ");
    scanf("%f",&morango);
    pesototal = morango + maca;
    if (pesototal < 5){
        totalmorango = 7.5*morango;
        totalmaca = 3.5*maca;
    }
    else{
        totalmorango = 5.3*morango;
        totalmaca = 2.8*maca;
    }
    total = totalmorango + totalmaca;
    if (total>19)
    {
        total = 0.92*total;
        printf("O valor da compra é: %.2f\n", total);
    }
    else
        printf("O valor da compra é: %.2f\n", total);
    return 0;
    exit(0);
}