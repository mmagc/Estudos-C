#include <stdio.h>

int main() {
    
    int f;
    float m;
    printf("Digite o numero de faltas: ");
    scanf("%d", &f);
    printf("Digite a media do aluno: ");
    scanf("%f", &m);
    if (f > 5){
        printf("F");
    } else if(f <= 5 && m < 6){
        printf("C");
    } else if(f <= 5 && m < 7.5){
        printf("B");
    } else if(f <= 5 && m < 9){
        printf("A");
    } else {
        printf("E");
    }
    

    return 0;
}
