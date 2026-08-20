#include <stdio.h>

int main()
{
    int numero = 10; // declaração de variavel
    int *ponteiro; // declaração de ponteiro
    
    ponteiro = &numero;
    // o ponteiro recebe o endereço de memoria(onde está) da variavel numero
    
    printf("Valor de numero: %d.\n", numero);
    printf("Endereço de memória: %p.\n", *ponteiro);
    printf("Valor apontado por ponteiro: %d.\n", ponteiro);
    
    return 0;
    
}