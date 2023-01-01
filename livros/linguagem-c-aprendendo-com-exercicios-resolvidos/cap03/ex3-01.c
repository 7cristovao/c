// Escreva um programa que leia um número na base decimal e em 
// seguida imprima esse mesmo número nas bases octal e hexadecimal.
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int num;

    printf("Escreva um número na base decimal: ");
    scanf("%d", &num);

    // imprimindo o número nas bases octal e hexadecimal
    printf("\nNúmero %d na base OCTAL eh: %o", num, num);
    printf("\nNúmero %d na base HEXADECIMAL eh: %x\n", num, num);
    
    return 0;
    exit(0);
}