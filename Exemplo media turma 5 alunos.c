/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main() {
    char nome[5][50];
    float nota[5];
    float soma = 0, media;
    float maior, menor;
    int i = 0;
 
    // Cadastro dos alunos (usando do while)
    do {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nome[i]);
 
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
 
        soma += nota[i];
 
        i++;
    } while (i < 5);
 
    // Inicializa maior e menor
    maior = menor = nota[0];
 
    // Encontrar maior e menor (usando for)
    for (i = 0; i < 5; i++) {
        if (nota[i] > maior) {
            maior = nota[i];
        }
        if (nota[i] < menor) {
            menor = nota[i];
        }
    }
 
    // Calcular média (usando while)
    i = 0;
    int contador = 0;
    while (contador < 5) {
        contador++;
        i++;
    }
    media = soma / 5;
 
    // Resultados
    printf("\nMédia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
 
    return 0;
}