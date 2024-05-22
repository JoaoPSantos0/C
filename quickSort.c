#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim){
    int pivo = (v[inicio]+v[fim]+v[(inicio+fim)/2])/3;
    while(inicio<fim){
        while(inicio<fim && v[inicio]<=pivo)
            inicio++;
        while(inicio<fim && v[fim]>pivo)
            fim--;
        int aux = v[inicio];
        v[inicio]=v[fim];
        v[fim]=aux;
    }
    return inicio;
}

void quickSort(int *v, int inicio, int fim){
    if(inicio<fim){
        int pos = particiona(v, inicio, fim);
        quickSort(v, inicio, pos-1);
        quickSort(v, pos, fim);
    }
}

void imprimir(int *v, int tam){
    int j;
    for(j=0; j<tam; j++){
        printf("%d ", v[j]);
    }
    printf("\n");
}

int main(){
    int n;
    scanf("%d",&n);
    int i, vet[n];
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    imprimir(vet, n);
    quickSort(vet, 0, n-1);
    imprimir(vet, n);


}