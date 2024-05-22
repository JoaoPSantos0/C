#include <stdio.h>


void selection(int *v, int n){
    int aux, menor;
    for(int i=0; i<n-1; i++){
        menor = i;
        for(int j=i+1; j<n; j++){
            if(v[menor]>v[j]){
                menor=j;
            }
        }
        if(i!=menor){
            aux=v[i];
            v[i]=v[menor];
            v[menor]=aux;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",v[i]);
    }
}

int main(){
    int n;
    printf("Digite o número de elementos do vetor:\n");
    scanf("%d", &n);
    printf("\n");
    int vet[n];
    printf("Digite os elementos do vetor: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    selection(vet, n);
    printf("\n");
}