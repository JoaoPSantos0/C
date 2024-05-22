#include <stdio.h>
#include <math.h>
/**
* Função que calcula a raiz quadrada de n.
* @param n um numero real qualquer
* @param p precisão do cálculos
* @return a raiz quadrada de n
*/
double raizQuadrada(double n, double e){
    
}
/**
* Valor absoluto de um numero qualquer
* @param n um número real qualquer
* @return o valor absoluto de n
*/
double absoluto(double n){

}
int main(){
    double n, p;
    scanf("%lf%lf", &n, &p);
    while((n - pow(raizQuadrada(n , p), 2))>p){
        printf("r: %.9lf erro: %.9lf\n", raizQuadrada(n, p));
    }
}