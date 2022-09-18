#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Digite um numero para X: ");
    scanf("%d",&x);
    printf("Digite um numero para y: ");
    scanf("%d",&y);
    printf("Voce digitou X:%d e Y:%d",x,y);
    x= x+y;
    y=x-y;
    x=x-y;
    printf("\nA inversao do variaveis sera X:%d e o valor  de Y:%d",x,y );
    return 0;
}
