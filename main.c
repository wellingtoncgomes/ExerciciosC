#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float num1;
    float funcao;

    printf("Digite um numero: ");
    scanf("%f",&num1);
    funcao= sqrt(num1 )  + (num1/2)+ pow(num1,num1);
    printf("o resulrtado da funcao e %.2f", funcao);

    return 0;
}
