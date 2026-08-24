#include <stdio.h>

int main()
{
    //variaveis
    int vetor[10];
    int logico = 0;
    int digito;
    
    //entrada de numeros nos vetores
    printf("Digite 10 numeros abaixo:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    //entrada de numero para busca
    printf("\nDigite um numero para procurar: ");
    scanf("%d", &digito);
    
    //procurar numero correspondente no vetor
    for(int i = 0; i < 10; i++)
    {
        //se encontrado...
        if (digito == vetor[i])
        {
            //primeiro o cabeçalho
            if(logico == 0)
            {
                printf("\nNumeros encontrados nos vetores correspondentes:");
                logico = 1;
            }
            //...imprima
            printf("\n%d", i);
        }
    }
    
    //se nada for encontrado
    if(logico == 0)
    {
        printf("\nNenhum numero encontrado nos vetores!");
    }
}