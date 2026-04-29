#include <stdio.h>

void main(){
    int n;
start:
    printf("Digite um numero: ");    
    scanf("%d", &n);    
    getchar();

    if(n < 0) goto start;
    for(size_t i = 0; i < 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}