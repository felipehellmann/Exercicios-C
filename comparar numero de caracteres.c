#include <stdio.h>
#include <string.h>

int main()
{
    //variaveis
    char nome1[50], nome2[50];
    
    //receber o nome1 e remover o \n
    printf("Digite um nome: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    
    //exibir o tamanho do nome1
    printf("\nTamanho: %d\n", strlen(nome1));
    
    //receber o nome2 e remover o \n
    printf("\nDigite outro nome: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    
    //comparar o numero de caracter e exibir o resultado
    if(strcmp(nome1, nome2) == 0)
    {
        printf("\nMesmo numero de caracteres!");
    }
    else
    {
        printf("\nNumero diferente de caracteres!");
    }
    
    //finalizar o programa
    return 0;
}