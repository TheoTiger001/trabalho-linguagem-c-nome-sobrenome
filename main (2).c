#include <stdio.h>

int main() {
    int N;
    int i; 
   
    printf("Digite um numero inteiro para calcular a tabuada: ");
    if (scanf("%d", &N) != 1) {
        printf("Por favor digite um numero inteiro.\n");
        return 1;
    }
    printf("\n--- Tabuada de %d ---\n", N);
    for (i = 1; i <= 10; i++) {
        int resultado = N * i; 
        printf("%d x %d = %d\n", N, i, resultado);
    }
    return 0;
}