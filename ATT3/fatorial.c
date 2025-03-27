#include <stdio.h>

int main() {
    int n, i, fat = 1;

    printf("Digite um número (n >= 0): ");
    scanf("%d", &n);

    i = n;
    while (i > 0) {
        fat *= i;
        i--;
    }

    printf("%d! = %d\n", n, fat);
    return 0;
}

// Melhor opção seria While pois facilita a verificação de condição de break.