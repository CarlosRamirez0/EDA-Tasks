#include <stdio.h>

#define PI 3.1454
void main(){
    int n;
start:
    printf("Digite um raio: ");    
    int flag = scanf("%d", &n);    
    getchar();
    if(n < 0 || flag != 1) goto start;
    
    printf("O comprimento do circulo e: %.2f", (float)PI*(2*n));
}