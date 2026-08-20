#include <stdio.h>

int main()
{
    //variaveis
    char nome[50];
    
    //entradas e saidas
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    
    printf("\nNome: %s", nome);
    
    return 0;
}