#include <stdio.h>

void imprime_invertido(unsigned int n) {

    if (n < 10) {
        printf("%u", n);
    }
    else {
        
        printf("%u", n % 10);       
        imprime_invertido(n / 10); 
    }
}

int main() {
    unsigned int num;

    printf("Digite um número: ");
    scanf("%u", &num);

    printf("Dígitos invertidos: ");
    imprime_invertido(num);
    printf("\n");
    
    return 0;
}