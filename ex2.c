#include <stdio.h>
void TorreHanoi(int n);
int main(){
    int m,n;
    printf("Escolha uma opçao:\n");
    printf("1.Ir\n");
    printf("2.Fechar\n");

    scanf("%d", &m);
    switch (m)
    {
    case 1:
        TorreHanoi(m);
        break;
    
    default:
        break;
    }

}
void TorreHanoi(int n){
    int x;
    printf("Escolha uma opção:\n");
    printf("1.Continuar\n");    
    printf("2.voltar\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Nada acontece\n");
        break;
    case 2:
        main();
        break;
    default:
        break;
    }

}