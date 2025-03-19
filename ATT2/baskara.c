
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);


    delta = b * b - 4 * a * c;

    if (delta > 0) {

        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", raiz1, raiz2);
        
    } 
    else if (delta == 0) {
        
        raiz1 = -b / (2 * a);
        printf("A raiz é: %.2f\n", raiz1);
        
    } 
    else {

        printf("Não existem raízes reais.\n");
        
    }

    return 0;
}