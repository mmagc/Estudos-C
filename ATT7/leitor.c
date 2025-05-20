#include <stdio.h>

int main() {
    char frase[1000];
    int i = 0, palavras = 0;
    int dentro_palavra = 0;
    char c;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    while ((c = frase[i]) != '\0') {
        if ((c != ' ' && c != '\n' && c != '\t') && dentro_palavra == 0) {
            dentro_palavra = 1;
            palavras++;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            dentro_palavra = 0;
        }
        i++;
    }

    printf("Quantidade de palavras: %d\n", palavras);
    return 0;
}
