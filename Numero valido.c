/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int num;
	
	do {
	    printf("\nDigite um numero positivo: ");
	    scanf("%d", &num);
	}
	while (num <= 0);
	    printf("\nNumero válido: %d\n", num);
}