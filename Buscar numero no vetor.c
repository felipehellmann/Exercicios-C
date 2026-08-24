#include <stdio.h>

int main()
{
    //variaveis
    int numvetor[10];
    int numdigitado;
    int logico = 0;
    
    //atribuição da tabuada do 7
    for(int i = 0; i < 10; i++)
    {   
        numvetor[i] = 7 * (i + 1);
    }
   
    //entrada
    printf("Digite um numero da tabuada do 7 para pesquisar no vetor: ");
    scanf("%d", &numdigitado);
    
    //procurar o numero
    for(int i = 0; i < 10; i++)
    {
        //varredura no numvetor
        if(numdigitado == numvetor[i])
        {
            //encontrado
            logico = 1;
            printf("\nNumero encontrado!");
            printf("\nO numero %d está no vetor %d.", numdigitado, i);
            
            //parar a varredura
            break;
        }
    }
    
    //se chegar ao final do vetor e não encontrar nada
    if(logico == 0)
    {
        printf("\nNumero não encontrado!");
    }
}