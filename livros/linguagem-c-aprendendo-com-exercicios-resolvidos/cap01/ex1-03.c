#include<stdio.h> // Biblioteca de entrada/saída por periféricos padrão
#include<curses.h> // Bibl. para manipulação de caract. (Linux)
                   // substitui conio
// #include<conio.h> // Bibl. para manipulação de caracteres (Windows)
#include<stdlib.h> // Biblioteca padrão para uso de funções do sistema

int main(){
    printf("Tabuada de 3: ");
    printf("\n");
    printf("\t3 x 1 = %d\n", 3*1);
    printf("\t3 x 2 = %d\n", 3*2);
    printf("\t3 x 3 = %d\n", 3*3);
    printf("\t3 x 4 = %d\n", 3*4);
    printf("\t3 x 5 = %d\n", 3*5);
    printf("\t3 x 6 = %d\n", 3*6);
    printf("\t3 x 7 = %d\n", 3*7);
    printf("\t3 x 8 = %d\n", 3*8);
    printf("\t3 x 9 = %d\n", 3*9);
    printf("\t3 x 10 = %d\n", 3*10);   
    
    return 0;
    exit(0); 
}