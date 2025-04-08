#include <stdio.h>
void rodizio (int placa) {
    switch (placa) {
        case 1:
        case 2:
            printf("Seu rodízio é segunda feira.\n");
            break;
        case 3:
        case 4:
            printf("Seu rodízio é terça feira.\n");
            break;
        case 5:
        case 6:
            printf("Seu rodízio é quarta feira.\n");
            break;
        case 7:
        case 8:
            printf("Seu rodízio é quinta feira.\n");
            break;
        case 9:
        case 0:
            printf("Seu rodízio é sexta feira.\n");
            break;
        default:
            printf("Número inválido.\n");
            break;
    }
}

int main() {

    int i;
    printf("Digite o último digito da placa do seu carro: ");
    scanf("%d", &i);

    rodizio(i);


    return 0;
}