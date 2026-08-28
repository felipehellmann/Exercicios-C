#include <stdio.h>
#include <string.h>

int main()
{
    //criação de variavel
    char nome1[50];
    char nome2[50];
    
    //pedido e recebimento de nome1
    printf("Digite um nome: ");
    fgets(nome1, 50, stdin);
    //substituição do \n por \0 do nome1
    nome1[strcspn(nome1, "\n")] = '\0';
    
    //pedido e recebimento de nome2
    printf("Digite outro nome: ");
    fgets(nome2, 50, stdin);
    //substituição do \n por \0 do nome2
    nome2[strcspn(nome2, "\n")] = '\0';
    
    //verificação de nome igual, senão diferente
    if(strcmp(nome1, nome2) == 0){
        printf("\nOs nomes são iguais");
    }
    else{
        printf("\nOs nomes são diferentes");
    }
}