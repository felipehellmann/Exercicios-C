#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int)); //aloca memória para 5 inteiros
    
    if (ponteiro != NULL) //verifica se a alocação deu certo
    {
        int i;
        for(i = 0; i < 5; i++){
            printf("%d ", ponteiro[i]); //exibe os valor (todos devem ser 0)
        }
        
        free(ponteiro); // libera a memória
    }

    return 0;
}