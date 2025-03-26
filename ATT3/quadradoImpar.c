#include <stdio.h>

int main()
{

    int n, i, quadrado = 0, impares = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Número inválido\n");
        return 0;

    } else {
        for (i = 0; i < n; i++)
        {
            quadrado += impares;
            impares += 2;
            
        }
    }

    printf("%d\n", quadrado);
    	
    
    return 0;
}
