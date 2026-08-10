/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, num, mult;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for (i = 1; i<=10; i++){
        mult = i * num;
        printf("%d x %d = %d\n", num, i, mult);
    }
}