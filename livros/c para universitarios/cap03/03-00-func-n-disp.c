#include <stdio.h>
#include <math.h>

int main(){

    double secante (double p)
    {
        return 1/cos(p);
    }
    double logn (double x, double n)
    {
        return log(x)/log(n);
    }
    double raiz (double x, double n)
    {
        return pow(x,1/n)
    }
    return 0;
}
// chamadas das funcoes
y = secante(x); // secante de x
z = logn(x,3); // logaritmo de x na base 3
w = raiz(x,3); // raiz cubica de x

return 0;
