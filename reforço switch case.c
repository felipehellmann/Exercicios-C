#include <stdio.h>

int main()
{
    //variaveis
    int number;
    
    //solicitações e entradas
    printf("Digite um numero (zero ou um): ");
    scanf("%d", &number);
    
    //estrutura de decisão
    switch(number)
    {
        case 1:
            printf("\nPositivo");
            break;
        
        case 0:
            printf("\nNegativo");
            break;
    }
    
    return 0;
}