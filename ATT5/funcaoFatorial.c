#include <stdio.h>

void fatorial(int n) {
    
    int fat = 1;
    int i = n;

    while (n > 0) {
        fat *= n;
        n--;
    }
    
    printf("%d! = %d\n", i, fat); 
}

int main() {
    int numero;

    printf("Digite um número maior que zero: ");
    scanf("%d", &numero);

    fatorial(numero);
    return 0;
}