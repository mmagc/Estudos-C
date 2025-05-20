#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    int i, tamanho;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
    }

    tamanho = strlen(frase);

    printf("Frase invertida: ");
    for(i = tamanho - 1; i >= 0; i--) {
        putchar(frase[i]);
    }
    printf("\n");

    return 0;
}
