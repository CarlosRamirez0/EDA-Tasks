#include <stdio.h>

#define PI 3.1454
void main(){
    int n;
start:
    printf("Digite um raio: ");    
    int flag = scanf("%d", &n);    
    getchar();
    if(n < 0 || flag != 1) goto start;
    
    printf("A area do circulo e: %.2f", (float)PI*(n*n));
}