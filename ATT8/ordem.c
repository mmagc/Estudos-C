#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;
    
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);
    
    printf("Antes de ordenar: a = %d, b = %d\n", x, y);
    ordena(&x, &y);
    printf("Depois de ordenar: a = %d, b = %d\n", x, y);
    
    return 0;
}