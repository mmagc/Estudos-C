#include <stdio.h>

int main()
{
    int x, y;
    
    x = 3;
    
    y = x * (x + 1) * x++;
    
    printf("%d\n", x);
    printf("%d\n", y);
    
    x = 5;    
    y = 3;
    
    y *= x + 1;

    printf("%d\n", x);    
    printf("%d\n", y);

    //Quais os valores das variáveis x e y após a execução dessas instruções?
    //Os valores das variáveis x e y após a primeira instrução sera de x = 4 e y = 36
    //Os valores das variáveis x e y após a segunda instrução sera de x = 5 e y = 18
    
    return 0;
}