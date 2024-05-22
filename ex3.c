#include <stdio.h>
#include <math.h>
//Função que inverte numeros de tres digitos;
void inverteDigitos(int n){
    int v[3];
    v[0] = n/100;
    v[1] = (n%100)/10;
    v[2] = ((n%100)%10);
    for(int j = 2; j>=0; j--){
        printf("%d", v[j]);
    } 
    
}
int main(){
    int num;
    scanf("%d", &num);
    inverteDigitos(num);
}