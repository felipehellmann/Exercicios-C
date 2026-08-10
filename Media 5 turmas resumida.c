/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {

	int i;
	char nome[50];
	float maior, menor;
	float soma = 0;
	float media = 0;
	float nota = 0;

	for (i = 1; i <= 5; i++) {
		printf("Digite o nome do aluno: \n");
		scanf("%s", nome);

		printf("Digite a nota do aluno: \n");
		scanf("%f", &nota);

		soma += nota;

		if(i == 1) {
			maior = nota;
			menor = nota;
		} else {
			if(nota > maior) {
				maior = nota;
			}
			if (nota < menor) {
				menor = nota;
			}
		}
	}

	media = soma / 5;
	printf("Maior nota é %.2f\n", maior);
	printf("Menor nota é %.2f\n", menor);
	printf("A media é %.2f\n", media);

	return 0;
}