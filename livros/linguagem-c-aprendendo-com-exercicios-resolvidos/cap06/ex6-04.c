// Faça um programa C que leia dez números que
// representem as notas de dez alunos, e que apresente:
// a)	 a soma dos números;
// b)	 a média dos números;
// c)	 o maior número;
// d)	 o menor número.
// Assuma que as notas são informadas corretamente
// no intervalo de 1 a 10.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont;
    float nota;
    float m;
    float s = 0, maior = 0, menor = 10;
    for(cont = 1; cont <= 10; cont++){
        printf("Digite a nota: ");
        scanf("%f", &nota);

        // Validação simples de nota
        if(nota<0 || nota >10)
        {
            printf("Dados incorretos: a nota deve estar entre 0 e 10");
            scanf("%f", &nota);
        }
        s = s + nota;
        if(nota>maior) // Comparação para obter a maior nota
            maior = nota;
        if(nota<menor)
            menor = nota;
    }
    printf("Soma = %.2f\n", s);
    printf("Média = %.2f\n", s/10);
    printf("A maior nota é %.1f\n",maior);
    printf("A menor nota é %.1f\n",menor);
    return 0;
    exit(0);
}