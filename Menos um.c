/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    
    printf("Digite seu numero: ");
    scanf("%d", &i);
    
    while (i>=0){
        printf("%d\n", i);
        i--;
    }
}