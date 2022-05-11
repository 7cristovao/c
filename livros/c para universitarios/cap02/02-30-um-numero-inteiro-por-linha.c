#include <stdio.h>
#include <math.h>

int main(){

    int a;
    scanf("%d",&a);
    while(a > 0)
    {
        printf("%d\n", a % 10);
        a = a / 10;
    }
}
