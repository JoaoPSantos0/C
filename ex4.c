#include <stdio.h>
/*
Função que recebe um inteiro n, descobre os divisores de n (com exceção do próprio n) 
e configura n como um número perfeito se a soma dos divisores for igual ao n
e como número nao perfeito se a soma for diferente de n;
*/
void somarDivisores(int n){
    int i, j = 0;
    for(i = 1; i<n; i++){
        if(n%i == 0){
            j++;
        }
    }
    int v[j];
    int k = 0;
    for(i = 1; i<n; i++){
        if(n % i == 0){
            v[k] = i;
            k++;
        }
    }
    int soma = 0;
    for(i = 0; i<j; i++){
        soma+=v[i];
    }
    if(n == soma){
        printf("%d =",n);
        for(i = 0; i<j; i++){
            if(i == j-1){
                printf(" %d = ",v[i]);
            }
            else{
                printf(" %d +", v[i]);
            }
        }printf("%d (NUMERO PERFEITO)\n",soma);
    }
    else{
        printf("%d =",n);
        for(i = 0; i<j; i++){
            if(i == j-1){
                printf(" %d = ",v[i]);
            }
            else{
                printf(" %d +", v[i]);
            }
        }printf("%d (NUMERO NAO E PERFEITO)\n",soma);
    }


}
int main(){
    int num;
    scanf("%d", &num);
    somarDivisores(num);
}