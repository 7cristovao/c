// Escreva um programa em C que apresente a tabuada de um número
// qualquer, sendo que este programa deverá apresentar o 
// seguinte trecho do código para apresentação dos dados:

// printf("Tabuada de %d:\n\n", num);
// // Escrevendo mensagens na tela
// printf("\t%d x 1 = %d\n", num, num*1);
// printf("\t%d x 2 = %d\n", num, num*2);
// printf("\t%d x 3 = %d\n", num, num*3);

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int num;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    printf("\nTabuada do %i: \n", num);
    printf("\t%d x 1 = %d\n", num, num*1);
    printf("\t%d x 2 = %d\n", num, num*2);
    printf("\t%d x 3 = %d\n", num, num*3);
    printf("\t%d x 4 = %d\n", num, num*4);
    printf("\t%d x 5 = %d\n", num, num*5);
    printf("\t%d x 6 = %d\n", num, num*6);
    printf("\t%d x 7 = %d\n", num, num*7);
    printf("\t%d x 8 = %d\n", num, num*8);
    printf("\t%d x 9 = %d\n", num, num*9);
    printf("\t%d x 10 = %d\n", num, num*10);
   
    return 0;
    exit(0);
}