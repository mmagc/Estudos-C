#include <stdio.h>
double max ( double a,  double b) {
    if ( a > b )
        return a;  /* interrompe a função*/
    return b;
}
int main() {

    double y;
    y = max( 3.0, 4.0 );
    printf("O maior é: %f\n", y);
    
    return 0;
  }