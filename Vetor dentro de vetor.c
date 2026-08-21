#include <stdio.h>

int main()
{
    //variaveis
    char nome[50] = "Felipe";
    int number[5];
    
    
    //atribuição
    number[1] = *nome;
    
    
    //saida
    printf("Nome %c", number[1]);


    return 0;
}