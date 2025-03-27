#include <stdio.h>

int main()
{

    int n = 1, quadrado;

    printf("Digite uma sequencia de números: ");

    while (n >= 0)
    {
        if (n == 0)
        {
            printf("Terminada a sequencia\n");
            break;
        }
        else
        {
            scanf("%d", &n);
            quadrado = n * n;
            printf("O quadrado de %d é %d\n", n, quadrado);
        }
        
    }
    	
    return 0;
}