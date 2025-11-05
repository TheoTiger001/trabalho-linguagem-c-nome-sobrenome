#include <stdio.h>
#define MAX_SALARIOS 10

int main() {
    
    double salarios[MAX_SALARIOS];
    int n; 
    int opcao;
    int i; 

    do {
        printf("Digite a quantidade de salarios de 1 a %d): ", MAX_SALARIOS);
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n'); 
            n = 0; 
        }
    } while (n < 1 || n > MAX_SALARIOS);

   
    printf("\n--- Leitura dos Salarios ---\n");
    for (i = 0; i < n; i++) {
        printf("Digite o salario %d/%d: R$ ", i + 1, n);
        while (scanf("%lf", &salarios[i]) != 1 || salarios[i] < 0) {
            printf("Valor invalido. Digite um valor >= 0: R$ ");
            while (getchar() != '\n'); 
        }
    }
    do {
        printf("\n----------------------------------\n");
        printf("Menu de Opcoes (N = %d salarios)\n", n);
        printf("1) Listar salarios\n");
        printf("2) Media dos salarios\n");
        printf("0) Sair\n");
        printf("Escolha: ");
        
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = -1;
        }
        switch (opcao) {
            case 1: {
                printf("\n--- Lista de Salarios (%d no total) ---\n", n);
                for (i = 0; i < n; i++) {
                    printf("Salario [%d]: R$ %.2f\n", i, salarios[i]);
                }
                break;
            }
            
            case 2: {
                double soma = 0.0;
                for (i = 0; i < n; i++) {
                    soma += salarios[i];
                }
                double media = soma / n;
                printf("\n--- Media dos Salarios ---\n");
                printf("Soma total: R$ %.2f\n", soma);
                printf("Quantidade de salarios: %d\n", n);
                printf("Media salarial: R$ %.2f\n", media);
                break;
            }
            case 0: {
                printf("\nEncerrando o sistema. Ate mais!\n");
                break;
            }
            default: {
                printf("\nOpcao invalida. Digite 1, 2 ou 0.\n");
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}