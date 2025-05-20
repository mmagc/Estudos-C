#include <stdio.h>

int strpos(const char s[], char c) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char frase[1000], caractere;
    int posicao;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite o caractere que deseja procurar: ");
    scanf(" %c", &caractere); 

    posicao = strpos(frase, caractere);

    if (posicao == -1) {
        printf("O caractere '%c' não foi encontrado na frase.\n", caractere);
    } else {
        printf("O caractere '%c' aparece pela primeira vez na posição %d.\n", caractere, posicao);
    }

    return 0;
}
