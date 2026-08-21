#include <stdio.h>

int main()
{
    //variaveis
    int maior, menor;
    int num[5];
    int soma = 0;
    int totalvetor = 5;
    float media;
    
    //loop
    for(int i = 0; i < totalvetor; i++)
    {
        printf("Digite um numero(vetor %d): ", i);
        scanf("%d", &num[i]);
        
        soma += num[i];
        
        if(i == 0)
        {
            maior = num[0];
            menor = num[0];
        } 
        else 
        {
            if (num[i] > maior)
            {
                maior = num[i];
            }
            if (num[i] < menor)
            {
                menor = num[i];
            }
        }
    }
    
    //calculo
    media = (float)soma / totalvetor;
    
    //saidas
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\nMedia: %.2f", media);
    printf("\nSoma: %d", soma);

    return 0;
}