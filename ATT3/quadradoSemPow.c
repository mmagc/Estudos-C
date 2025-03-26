#include <stdio.h>

int main()
{
    int base, numero, multiplicado, i;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &numero);
    
    multiplicado = base;
    i = 1;
    
    do{
        
        multiplicado = multiplicado * base;
        i++;
        
    }while(i < numero);
    
    printf("%.2d\n", multiplicado);
    
    return 0;
}