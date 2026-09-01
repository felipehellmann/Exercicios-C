#include <stdio.h>

void saudacao(char nome[]){
    printf("Ola, %s!\n", nome);
}

int main()
{
    saudacao("Felipe");
    saudacao("Joao");
    saudacao("Maria");
    
    return 0;
}