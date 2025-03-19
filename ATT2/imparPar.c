#include <stdio.h>

int main()
{
    int n, i;
    printf("Digite um número: ");
    scanf("%d", &n);
    i = (n % 2) ;
    printf("%d é %s\n", n, (i == 0) ? "par" : "impar");

    return 0;
}
