#include <stdio.h>

int main(){
    float F, C;
    
    printf("Digite a temperatura em Farenheint: ");
    scanf("%f", &F);
    
     C = (F-32) * 5 / 9;
     
    printf("A temperatura em Celsius é de: %.2f\n", C);

    return 0;
}