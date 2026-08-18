#include <stdio.h>

int main()
{
    //variaveis
    float nota;
    char conceito;
    
    //solicitções e entradas
    printf("Digite sua nota: ");
    scanf("%f", &nota);
    
    printf("Digite seu conceito: ");
    scanf(" %c", &conceito);
    
    //saidas
    printf("\nNota: %.2f", nota);
    printf("\nConceito: %c\n", conceito);
    
    switch(conceito)
    {
        case 'A':
            printf("Excelente!");
            break;
        
        case 'B':
            printf("Muito bom!");
            break;
        
        case 'C':
            printf("Mandou bem!");
            break;
        
        case 'D':
            printf("Pode melhorar!");
            break;
        
        case 'E':
            printf("Você é melhor que isso!");
            break;
        
        case 'F':
            printf("Vai apanhar!");
            break;
        
        case 'G':
            printf("Esse conceito nem existe!");
            break;
        
        default:
            printf("Conceito inválido");
            break;
    }
    
    return 0;
}