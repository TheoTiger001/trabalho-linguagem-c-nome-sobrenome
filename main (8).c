#include <stdio.h>
#define FILIAIS 2
#define MESES 2

int main() {
    
    double vendas[FILIAIS][MESES];
    int opcao;
    int i, j; 
    printf("\n--- Leitura dos Dados de Vendas (R$) ---\n");
    for (i = 0; i < FILIAIS; i++) {
        for (j = 0; j < MESES; j++) {
            printf("Vendas da Filial %d no Mes %d: R$ ", i + 1, j + 1);
           
            while (scanf("%lf", &vendas[i][j]) != 1 || vendas[i][j] < 0) {
                printf("Valor invalido. Digite um valor >= 0: R$ ");
                while (getchar() != '\n'); 
            }
        }
    }
    do {
        printf("\n----------------------------------\n");
        printf("Menu de Totais:\n");
        printf("1) Total por filial (Linha)\n");
        printf("2) Total por mes (Coluna)\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha: ");
        
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = -1;
        }
        switch (opcao) {
            case 1: {
               
                printf("\n--- Total por Filial ---\n");
                for (i = 0; i < FILIAIS; i++) {
                    double total_filial = 0.0;
                  
                    for (j = 0; j < MESES; j++) {
                        total_filial += vendas[i][j];
                    }
                    printf("Filial %d (Linha %d): R$ %.2f\n", i + 1, i, total_filial);
                }
                break;
            }
            case 2: {
              
                printf("\n--- Total por Mes ---\n");
                for (j = 0; j < MESES; j++) {
                    double total_mes = 0.0;
                    
                    for (i = 0; i < FILIAIS; i++) {
                        total_mes += vendas[i][j];
                    }
                    printf("Mes %d (Coluna %d): R$ %.2f\n", j + 1, j, total_mes);
                }
                break;
            }
            
            case 3: {
             
                double total_geral = 0.0;
            
                for (i = 0; i < FILIAIS; i++) {
                    for (j = 0; j < MESES; j++) {
                        total_geral += vendas[i][j];
                    }
                }
                printf("\n--- Total Geral ---\n");
                printf("Vendas Totais: R$ %.2f\n", total_geral);
                break;
            }
            
            case 0: {
                printf("\nEncerrando o programa.\n");
                break;
            }
            
            default: {
                printf("\nOpcao invalida. Digite 1, 2, 3 ou 0.\n");
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}