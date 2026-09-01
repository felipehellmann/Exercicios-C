#include <stdio.h>
#include <string.h>

void apresentar(char nome[], int idade){
    printf("\nOla, %s!\n", nome);
    printf("Você tem %d anos.\n", idade);
}

int main()
{
    int idade;
    char nome[50];
    
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    apresentar(nome, idade);
    
    return 0;
}