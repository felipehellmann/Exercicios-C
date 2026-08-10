/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int num;
	int soma = 0;

	printf("Digite numeros ( 0 para sair ) : ");
	scanf("%d", &num);

	while (num != 0) {
		soma = soma + num;
		scanf("%d", &num);
	}

	printf("Soma total: %d", soma);
}