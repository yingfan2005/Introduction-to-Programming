#include <stdio.h>
#include <string.h>

void gerar_sequencia_espelho(int B, int E) {
    char sequencia[100000] = ""; // String para a sequência crescente
    char espelho[100000] = "";   // String para o reflexo
    int pos = 0; // Posição atual na sequência
    
    // 1. Gerar sequência crescente
    int i;
    for (i = B; i <= E; i++) {
        char num_str[20];
        sprintf(num_str, "%d", i);
        
        // Concatenação manual (sem strcat)
        int j = 0;
        while (num_str[j] != '\0') {
            sequencia[pos++] = num_str[j++];
        }
    }
    sequencia[pos] = '\0';
    
    // 2. Gerar reflexo (inverso da sequência)
    int len = strlen(sequencia);
    int x;
    for ( x = 0; x < len; x++) {
        espelho[x] = sequencia[len - 1 - x];
    }
    espelho[len] = '\0';
    
    // 3. Combinar sequência + reflexo
    int m;
    for (m = 0; m < len; m++) {
        sequencia[pos++] = espelho[m];
    }
    sequencia[pos] = '\0';
    
    printf("%s\n", sequencia);
}

int main() {
    int C;
    scanf("%d", &C);
    int i;
    for (i = 0; i < C; i++) {
        int B, E;
        scanf("%d %d", &B, &E);
        gerar_sequencia_espelho(B, E);
    }
    
    return 0;
}