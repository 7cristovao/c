#include<stdio.h> // Biblioteca de entrada/saída por periféricos padrão
#include<curses.h> // Bibl. para manipulação de caract. (Linux)
                   // substitui conio
// #include<conio.h> // Bibl. para manipulação de caracteres (Windows)
#include<stdlib.h> // Biblioteca padrão para uso de funções do sistema

int main(){

    int num_alunas, num_alunos;
    
    printf("Digite o número de alunas: ");
    scanf("%d", &num_alunas);

    printf("\nDigite o número de alunos: ");
    scanf("%d", &num_alunos);

    printf("\nO número de alunas é: %d", num_alunas);
    printf("\nO número de alunos é: %d\n", num_alunos);
}