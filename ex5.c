#include <stdio.h>
#include <math.h>//para calular as raizes;
/**
 Função para descobrir as raizes de uma equação de segundo graus dados os coeficientes;
*/
void descobrirRaizes(double a, double b, double c){
    double delta;
    double x1, x2;
    delta = pow(b, 2) - (4 * a * c);
    //printf("delta = %.2lf\n", sqrt(delta));
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    if(delta < 0){
        printf("RAIZES IMAGINÁRIAS\n");
        return;
    }
    if(x1 != x2){
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }
    else if(x1 == x2){
        printf("RAIZ ÚNICA\n");
        printf("X1 = %.2lf\n", x1);
    }

}

int main(){
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    descobrirRaizes(A, B, C);
}