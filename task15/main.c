#include <stdio.h>
#include <math.h>

void main(){
    float x[5];
    float *soma;
    *soma = 0;
    
    for(int i=0; i<5; i++){
        printf("Digite os numeros\n");
        scanf("%f", &x[i]);
        
        *soma += x[i];
        
    }
    
    printf("%f",  *soma/5);
    
}