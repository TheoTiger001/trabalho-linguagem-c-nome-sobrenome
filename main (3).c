#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int maior;
    int menor;
    long long soma = 0;
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        if (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada invalida. Por favor, digite um numero inteiro.\n");
            return 1;
        }
        soma += vetor[i];
    }
    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < TAMANHO; i++) {
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    double media = (double)soma / TAMANHO;
    printf("\n--- Resultados ---\n");
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    printf("Soma dos elementos: %lld\n", soma);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}