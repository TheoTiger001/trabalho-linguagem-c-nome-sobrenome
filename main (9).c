#include <stdio.h>
#define MAX_FUNCIONARIOS 10

int main() {
  
    int ids[MAX_FUNCIONARIOS];
    double salarios[MAX_FUNCIONARIOS];
    
    int n; 
    int opcao;
    int i; 
    do {
        printf("Digite a quantidade de funcionarios (N, de 1 a %d): ", MAX_FUNCIONARIOS);
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > MAX_FUNCIONARIOS);
    printf("\n--- Leitura dos Dados (ID e Salario) ---\n");
    for (i = 0; i < n; i++) {
        printf("Funcionario %d/%d:\n", i + 1, n);
        
      
        printf("  - ID (inteiro): ");
        while (scanf("%d", &ids[i]) != 1) {
            printf("  ID invalido. Digite um numero inteiro: ");
            while (getchar() != '\n');
        }

        
        printf("  - Salario (R$): ");
        while (scanf("%lf", &salarios[i]) != 1 || salarios[i] < 0) {
            printf("  Salario invalido. Digite um valor >= 0: R$ ");
            while (getchar() != '\n');
        }
    }
    do {
        printf("\n----------------------------------\n");
        printf("Menu de Cadastro:\n");
        printf("1) Listar todos os funcionarios\n");
        printf("2) Mostrar funcionario com Maior Salario\n");
        printf("0) Sair\n");
        printf("Escolha: ");
        
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            opcao = -1;
        }

        switch (opcao) {
            case 1: {
                
                printf("\n--- Lista de Funcionarios ---\n");
                printf("ID\t| Salario (R$)\n");
                printf("---------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t| %.2f\n", ids[i], salarios[i]);
                }
                break;
            }
            
            case 2: {
              
                int indice_maior_salario = 0;
                
               
                double maior_salario = salarios[0];

               
                for (i = 1; i < n; i++) {
                    if (salarios[i] > maior_salario) {
                        maior_salario = salarios[i];
                        indice_maior_salario = i; 
                    }
                }
                printf("\n--- Funcionario com Maior Salario ---\n");
                printf("ID: %d\n", ids[indice_maior_salario]);
                printf("Salario: R$ %.2f\n", maior_salario);
                break;
            }
            
            case 0: {
                printf("\nEncerrando o sistema de cadastro.\n");
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