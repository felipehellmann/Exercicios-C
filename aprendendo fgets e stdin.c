#include <stdio.h>

int main()
{
    //variaveis
    char nome[50], cidade[50];
    int idade;
    
    
    //entradas
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    
    printf("Digite sua cidade: ");
    fgets(cidade, 50, stdin);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    
    //saidas
    printf("\nNome: %s", nome);
    printf("Cidade: %s", cidade);
    printf("Idade: %d\n", idade);
    
    printf("\nPrazer %s", nome);
    printf("Você tem %d anos e mora em %s", idade, cidade);
    printf("Que Legal!");

    
    return 0;
}