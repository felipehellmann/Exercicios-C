#include <stdio.h>
#include <string.h>

int main()
{
    //criação de variavel
    char nome[50];
    
    //pedido e entrada de nome
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    
    //remover o \n de nome para que não ocorra erros na saida
    nome[strcspn(nome, "\n")] = '\0';
    
    //saida
    printf("\nSeu nome é: %s", nome);
    printf("\nSeu nome tem %d caracteres", strlen(nome));
    
    return 0;
}