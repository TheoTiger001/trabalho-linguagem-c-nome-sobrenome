#include <stdio.h>

int main() {
    int n;
    int i;
    int e_primo = 1; 
     printf("Digite um numero inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (n < 2) {
        printf("O numero deve ser maior ou igual a 2, conforme o enunciado.\n");
        return 1;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            e_primo = 0; 
            printf("\n--- Resultado ---\n");
            printf("O numero %d NAO e primo.\n", n);
            printf("Menor divisor (>1) encontrado: %d\n", i);
            break; 
        }
    }
    if (e_primo == 1) {
        printf("\n--- Resultado ---\n");
        printf("O numero %d E primo.\n", n);
    }
    return 0;
}