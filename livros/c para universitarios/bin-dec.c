#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int conversor(long long n);

int main(){
    
    long long n;

    printf("Entre um numero binario: ");
    scanf("%lld",&n);
    printf("%lld em binario = %d em decimal", n, conversor(n));
    printf("\n");
    return 0;
}

int conversor(long long n) {
    int decimal = 0, i = 0, resto;
    while (n!=0)
    {
        resto = n % 10;
        n /= 10;
        decimal += resto * pow(2, i);
        ++i;
    }
    return decimal;
}
