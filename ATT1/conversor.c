#include <stdio.h>

int main() {
    char caractere;

    
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Codigo ASCII de '%c':\n", caractere);
    printf("Octal: %o\n", caractere);
    printf("Decimal: %d\n", caractere);
    printf("Hexadecimal: %x\n", caractere);

    return 0;
}