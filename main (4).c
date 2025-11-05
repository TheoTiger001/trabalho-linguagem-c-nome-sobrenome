#include <stdio.h>
#include <string.h> 
#include <ctype.h>  
#define MAX_SIZE 101

int main() {
    char linha[MAX_SIZE];
    int contador_vogais = 0;
    int i;

    printf("Digite uma linha de texto (max 100 caracteres):\n");

    if (fgets(linha, MAX_SIZE, stdin) == NULL) {
        printf("Erro na leitura da linha.\n");
        return 1;
    }
    for (i = 0; linha[i] != '\0'; i++) {
        
        char caractere_minusculo = tolower(linha[i]);

        if (caractere_minusculo == 'a' || 
            caractere_minusculo == 'e' || 
            caractere_minusculo == 'i' || 
            caractere_minusculo == 'o' || 
            caractere_minusculo == 'u') {
            
            contador_vogais++;
        }
    }

    printf("\n--- Resultado ---\n");
    printf("A linha digitada contem %d vogais.\n", contador_vogais);

    return 0;
}