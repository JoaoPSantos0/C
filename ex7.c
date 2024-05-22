#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void print_bytes( const void * end_byte, int n ){
    //Para unsigned char
    int bin_vet[8],i,j;
    unsigned char *ptr =(unsigned char*) end_byte;
    unsigned char rec = *ptr;
    for (i = 7; i >= 0; i--)
   {
      if (*ptr % 2 == 0)
        bin_vet[i] = 0;
      else
        bin_vet[i] = 1;
        *ptr = *ptr / 2;
   }
   for(i=0; i<8; i++){
    printf("%d",bin_vet[i]);
   }
   printf("\n");
   //Para unsigned short
   char* binary = (char*)malloc(sizeof(char) * 17);
    j = 0;
    //dividir em dois casos, se *ptr > 255 eu zero os 8 primeiros numeros, caso contrario eu zero somente os 8 ultimos;
    if(rec<=255){
    for (i = 7; i >= 0; i--){
      if (rec % 2 == 0)
        binary[i] = '0';
      else
        binary[i] = '1';
        rec = rec / 2;
        }
    binary[8]=' ';
    for(i=9; i<16; i++){
        binary[i]='0';
    }
    }
    if(rec>255){
        int new_ptr = rec - 255;
        for(i = 16; i>=9; i--){
            if(new_ptr %2 == 0){
                binary[i] = '0';
            }
            else{
                binary[i] = '1';
                new_ptr = new_ptr/2;
            }
        }
        binary[8]=' ';
        for(i=7; i>=0; i--){
            binary[i] = 0;
        }
    }
    printf("%s", binary);
    printf("\n");
    free(binary);
     
     
    
}

int main(){
    double n;
    scanf("%lf", &n);
    //printf("%d\n", &n);
    unsigned char num1 = (unsigned char)n;
    print_bytes(&num1, sizeof(num1));
    //unsigned short num2 = (unsigned short)n;
    //print_bytes(&num1, sizeof(n));
}