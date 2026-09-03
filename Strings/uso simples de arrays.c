#include <stdio.h>
#include <string.h>

int main()
{
    //criação de variavel array
    char nomes[5][50];
    
    //loop para receber os nomes
    for(int i = 0; i < 5; i++){
        if(i == 0){
            printf("Digite 5 nomes.\n");
        }
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
    
    //loop para printar
    for(int i = 0; i < 5; i++){
        if(i == 0){
            printf("\nVocê digitou:\n");
        }
        printf("%d: %s\n", i + 1, nomes[i]);
    }
    return 0;
}