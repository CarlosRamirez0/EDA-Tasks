#include <stdio.h>

#define PI 3.1454
void main(){
    int n;
start:
    printf("Digite um numero: ");    
    scanf("%d", &n);    
    getchar();

    if(n < 0) goto start;
    printf("O volume da esfera eh: %.2f", (4/3)*PI*(n*n*n));
}