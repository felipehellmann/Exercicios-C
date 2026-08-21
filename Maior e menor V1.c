#include <stdio.h>

int main()
{
    //variaveis
    int numbers[5], soma = 0, maior, menor;
    float media;
    
    //entradas
    printf("Atribuir vetor 0: ");
    scanf("%d", &numbers[0]);
    
    //atribuição
    maior = numbers[0];
    menor = numbers[0];
    
    //loop
    for (int i = 1; i < 5; i++)
    {
        printf("Atribuir vetor %d: ", i);
        scanf("%d", &numbers[i]);
        
        soma += numbers[i];
        
        if (numbers[i] > maior)
        {
            maior = numbers[i];
        }
        if (numbers[i] < menor)
        {
            menor = numbers[i];
        }
    }
    
    //calculo
    media = (float)soma / 5;
    
    //saidas
    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    
    
    return 0;
}