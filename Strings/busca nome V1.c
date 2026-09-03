#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][50];
    char busca[50];
    int encontrei = 0;
    
    printf("Digite 5 nomes:\n");
    
    for (int i = 0; i < 5; i++){
        printf("%d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
    
    printf("\nAgora digite um nome para procurar:\n- ");
    fgets(busca, 50, stdin);
    busca[strcspn(busca, "\n")] = '\0';
    
    printf("\nProcurando...\n");
    
    for (int i = 0; i < 5; i++){
        if(strcmp(busca, nomes[i]) == 0 && encontrei == 0){
            encontrei = 1;
            printf("\nNome encontrado na posição: %d", i + 1);
        } else if (strcmp(busca, nomes[i]) == 0){
            printf(", %d", i + 1);
        }
    }
    
    if(encontrei == 0){
        printf("\nNada encontrado!");
    }
    
    return 0;
}