#include <stdio.h>

int main()
{
    //variaveis
    int number[5];
    
    //entradas
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero correspondente ao vetor %d: ", i);
        scanf("%d", &number[i]);
    }
    
    //saida
    printf("\nVocê digitou nesta ordem:");
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nVetor[%d] = %d", i, number[i]);
    }

    return 0;
}