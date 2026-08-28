#include <stdio.h>
#include <string.h>

int main()
{
    //criação de variavel
    char nome[100];
    char sobrenome[50];
    
    //entrada de nome e remoção de \n
    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    //entrada de sobrenome e remoção de \n
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, 50, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    
    //adicionar espaço em nome
    strcat(nome, " ");
    //juntar nome e sobrenome em uma só string
    strcat(nome, sobrenome);
    
    //saida e retorno
    printf("\nSeu nome é %s", nome);
    return 0;
}