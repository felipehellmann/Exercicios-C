#include <stdio.h>

int main()
{
    //variaveis
    int maior, menor, i, num[3];
    
    //loop
    for(i = 0; i < 3; i++)
    {
        printf("Digite um numero(vetor %d): ", i);
        scanf("%d", &num[i]);
        
        if(i == 0)
        {
            maior = num[0];
            menor = num[0];
        } else {
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
    
    //saidas
    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);

    return 0;
}