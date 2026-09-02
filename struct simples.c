#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    //criação da struct pessoa
    struct pessoa{
        char nome[50];
        int idade;
        char telefone[15];
    }

    //criação de uma variável do tipo struct pessoa e inicialização de seus campos
    struct pessoa p1 = {"Felipe", 19, "123456789"};

    //criação de outra variável do tipo struct pessoa e inicialização de seus campos separadamente
    struct pessoa p2;
    strcpy(p2.nome, "Pedro");
    p2.idade = 8;
    strcpy(p2.telefone, "987654321");

    return 0;
}