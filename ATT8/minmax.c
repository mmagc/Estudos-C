#include <stdio.h>

void minimax(float v[], int n, float *a, float *b) {
    if (n <= 0) {
        *a = 0;
        *b = 0;
        return;
    }

    *a = v[0];
    *b = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] < *a) {
            *a = v[i];  
        }
        if (v[i] > *b) {
            *b = v[i];  
        }
    }
}

int main() {
    float valores[] = {3.5, 2.1, 7.8, 1.2, 9.3, 4.4};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    float min, max;
    
    minimax(valores, tamanho, &min, &max);
    
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.1f ", valores[i]);
    }
    printf("\n");
    
    printf("Mínimo: %.1f\n", min);
    printf("Máximo: %.1f\n", max);
    
    return 0;
}