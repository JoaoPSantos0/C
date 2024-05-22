#include <stdio.h>

//funçao que recebe um numero natural e faz o fatorial dele;
unsigned long int fat( unsigned int n){
    int ft, j = 0;
    for(ft = 1; n>1; n--){
        ft *= n;
    }
    return ft;
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d! = %d",num, fat(num));
}
