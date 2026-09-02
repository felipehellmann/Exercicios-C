#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
    char telefone[15];
};

int main() {
    struct pessoa lista[3];
    int i;
    
    lista[0] = (struct pessoa){"Felipe", 19, "1234567890"};
    lista[1] = (struct pessoa){"Pedro", 8, "4444444444"};
    lista[2] = (struct pessoa){"Maria", 25, "5555555555"};

    for(i = 0; i < 3; i++) {
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Telefone: %s\n", lista[i].telefone);
        printf("\n");
    }

    return 0;
}