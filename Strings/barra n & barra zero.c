#include <stdio.h>
#include <string.h>

int main()
{
    //variaveis
    char nome1[50], nome2[50];
    int tamanhonome;
    
    //entrada de nome
    printf("Digite um nome: ");
    fgets(nome1, 50, stdin);
    
    //procurar o \n dentro da variavel "nome1" e substituir por \0
    nome1[strcspn(nome1, "\n")] = '\0';
    
    //saida
    printf("%s!", nome1);
}