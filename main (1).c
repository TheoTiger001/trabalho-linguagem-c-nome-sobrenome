#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int contador = 0;
    
    printf("Digite um numero inteiro (-1 para encerrar): ");
    while (scanf("%d", &numero) == 1 && numero != -1) {
        soma = soma + numero;
        contador = contador + 1;
        printf("Digite o proximo numero inteiro (-1 para encerrar): ");
    }
    if (contador > 0) {
        double media = (double)soma / contador; 
        printf("\n--- Resultados ---\n");
        printf("Quantidade de numeros lidos: %d\n", contador);
        printf("Soma dos numeros: %d\n", soma);
        printf("Media dos numeros: %.2f\n", media); 
    } else {
        printf("\nNenhum numero valido foi inserido (somente o sentinela).\n");
    }

    return 0;
}