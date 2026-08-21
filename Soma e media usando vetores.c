#include <stdio.h>

int main()
{
    //variaveis
    int numbers[5];
    int soma = 0;
    float media;
    
    //entradas
    for (int i = 0; i < 5; i++)
    {
        printf("Atribuir vetor %d: ", i);
        scanf("%d", &numbers[i]);
        soma +=  numbers[i];
    }
    
    //funções
    media = (float)soma / 5;
    
    //saida
    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);
    
    
    return 0;
}