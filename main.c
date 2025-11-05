/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida. Por favor, digite um numero inteiro.\n");
        return 1;
    }

    printf("O numero %d e:\n", numero);
    if (numero == 0) {
        printf("- Zero\n");
        printf("- Par\n"); 
    } 
    else if (numero > 0) {
        printf("- Positivo\n");
        
        if (numero % 2 == 0) {
            printf("- Par\n");
        } else {
            printf("- Impar\n");
        }
    } 
    else { // (numero < 0)
        printf("- Negativo\n");
        
        if (numero % 2 == 0) {
            printf("- Par\n");
        } else {
            printf("- Impar\n");
        }
    }

    return 0; 
}