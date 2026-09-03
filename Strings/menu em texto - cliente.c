/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int opcao;

	printf("1 - Inserir novo cliente.");
	printf("\n2 - Consultar cliente por CPF.");
	printf("\n3 - Consultar cliente por nome.");
	printf("\n4 - Remover cliente da base de clientes.");
	printf("\nDigite qualquer numero para sair.\n");

	printf("\nDigite a opçao desejada: ");
	scanf("%d", &opcao);

	switch(opcao) {
	case 1:
		printf("\nVamos inserir um novo cliente.");
		break;
	case 2:
		printf("\nVamos consultar cliente por CPF.");
		break;
	case 3:
		printf("znVamos consultar por nome.");
		break;
	case 4:
		printf("\nVamos remover um cliente.");
		break;
	default:
		printf("\nSaindo do sistema.");
	}

}