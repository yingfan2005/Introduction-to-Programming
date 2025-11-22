#include <stdio.h>
#include <stdlib.h> // Necessário para calloc e free

int main() {
    int N;
    int city_count = 0;

    // Loop principal para processar múltiplos casos de teste
    while (scanf("%d", &N) == 1 && N != 0) {
        city_count++;

        // Array para armazenar a contagem de pessoas para cada consumo por pessoa
        // Os índices representam o consumo por pessoa arredondado para baixo (0 a 200)
        // Os valores armazenados são a quantidade de pessoas com aquele consumo per capita
        int *consumption_per_person_counts = (int *)calloc(201, sizeof(int));
        if (consumption_per_person_counts == NULL) {
            fprintf(stderr, "Erro de alocação de memória.\n");
            return 1; // Saída com erro se a alocação falhar
        }

        int total_residents = 0;
        long long total_consumption = 0; // Usar long long para evitar overflow se os valores forem grandes

        // Leitura dos dados de cada imóvel
        int i;
        for ( i = 0; i < N; i++) {
            int residents;
            int total_house_consumption;
            scanf("%d %d", &residents, &total_house_consumption);

            total_residents += residents;
            total_consumption += total_house_consumption;

            // Calcular o consumo por pessoa e arredondar para baixo (divisão inteira)
            int consumption_per_person = total_house_consumption / residents;

            // Adicionar a quantidade de moradores ao índice correspondente no array
            // Garantir que o índice não exceda os limites (0 a 200)
            if (consumption_per_person >= 0 && consumption_per_person <= 200) {
                consumption_per_person_counts[consumption_per_person] += residents;
            }
        }

        // Imprimir linha em branco entre cidades (exceto a primeira)
        if (city_count > 1) {
            printf("\n");
        }

        printf("Cidade# %d:\n", city_count);

        // Imprimir os pares quantidade-consumo ordenados
        int first_output = 1; // Flag para controlar o espaço inicial
        for (i = 0; i <= 200; i++) { // Iterar pelos possíveis consumos por pessoa
            if (consumption_per_person_counts[i] > 0) { // Se houver pessoas com este consumo
                if (!first_output) {
                    printf(" "); // Adicionar espaço antes do próximo par
                }
                printf("%d-%d", consumption_per_person_counts[i], i);
                first_output = 0;
            }
        }
        printf("\n"); // Nova linha após a lista de consumos

        // Calcular e imprimir o consumo médio da cidade
        double average_consumption = (double)total_consumption / total_residents;
        printf("Consumo medio: %.2f m3.\n", average_consumption);

        // Liberar a memória alocada para o array
        free(consumption_per_person_counts);
    }

    return 0;
}