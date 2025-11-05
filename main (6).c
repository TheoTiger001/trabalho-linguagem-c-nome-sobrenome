#include <stdio.h>

int main() {
    double salario;
    int opcao;
    
    printf("Digite o salario mensal: R$ ");
    if (scanf("%lf", &salario) != 1) {
        printf("Entrada invalida. Encerrando.\n");
        return 1;
    }
    while (1) { 
        printf("\n--- Menu RH ---\n");
        printf("Salario: R$ %.2f\n", salario);
        printf("1) Calcular INSS (8%%)\n");
        printf("2) Calcular Hora Extra (Adicional 50%%)\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        
        // Leitura da opção
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida. Limpando entrada e continuando.\n");
           
            while(getchar() != '\n'); 
            continue;
        }
      
        if (opcao == 0) {
            printf("Saindo do sistema. Adeus!\n");
            break; 
        }
        switch (opcao) {
            case 1: {
               
                double inss = salario * 0.08;
                printf("\n>>> Valor do INSS a descontar: R$ %.2f\n", inss);
                break;
            }
            case 2: {
               
                double horas_extras;
                printf("Quantas horas extras foram trabalhadas? ");
                if (scanf("%lf", &horas_extras) != 1 || horas_extras < 0) {
                    printf("Quantidade de horas invalida.\n");
                    break;
                }
                
                double valor_hora_normal = salario / 220.0;
                double valor_hora_extra = valor_hora_normal * 1.50; 
                double total_a_pagar = valor_hora_extra * horas_extras;
                
                printf("\n>>> Valor por Hora Extra: R$ %.2f\n", valor_hora_extra);
                printf(">>> Total a pagar por Horas Extras: R$ %.2f\n", total_a_pagar);
                break;
            }
            default: {
                printf("\nOpcao nao reconhecida. Digite 1, 2 ou 0.\n");
                break;
            }
        }
    }
    return 0;
}