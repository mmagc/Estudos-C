#include <stdio.h>

#define PI 3.1415

int main() {
    float raio, area, perimetro;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo (A = π * r²)
    area = PI * (raio * raio);

    // Calcula o perímetro do círculo (P = 2 * π * r)
    perimetro = 2 * PI * raio;

    printf("Área do círculo: %.2f\n", area);
    printf("Perimetro do círculo: %.2f\n", perimetro);


    return 0;
}
