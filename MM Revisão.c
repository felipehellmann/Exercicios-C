#include <stdio.h>

int main()
{
    //variaveis
    int maior, menor;
    int numeros[5];
    
    //loop
    for(int i = 0; i < 5; i++)
    {
        //entrada
        printf("Digite um numero correspondente ao vetor %d: ", i);
        scanf("%d", &numeros[i]);
        
        //estrutura de decisão
        if(i == 0)
        {
            maior = numeros[0];
            menor = numeros[0];
        } else {
            if(maior < numeros[i])
            {
                maior = numeros[i];
            }
            if(menor > numeros[i])
            {
                menor = numeros[i];
            }
        }
        
    }
    
    //saida
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d", menor);
}