#include <stdio.h>
#include <string.h>

int main()
{
    //criação de variaves
    char nomes[5][50];
    char busca[50];
    int achei = 0;
    
    printf("Digite 5 numeros.\n");
    
    //loop para receber os nomes
    for(int i = 0; i < 5; i++){
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
    
    //entrada de busca
    printf("\nAgora digite um nome pra procurar: ");
    fgets(busca, 50, stdin);
    busca[strcspn(busca, "\n")] = '\0';
    
    //estrutura de busca e decisão
    for(int i = 0; i < 5; i++){
        if(strcmp(nomes[i], busca) == 0){
            printf("\n%s encontrado!", busca);
            printf("\nPosição: %d", i + 1);
            achei = 1;
        }
    }
    //se nada for encontrado, F no chat
    if(achei == 0){
        printf("\n%s não encontrado.", busca);
    }
    
    return 0;
}