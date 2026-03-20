#include <stdio.h>
#include <math.h>

void main(){
    float idades[3];
    
    float *soma;
    
    *soma = 0;
    
    
    for(int i=0; i<3; i++){
        printf("Digite os numeros\n");
        scanf("%f", &idades[i]);
        
        *soma += idades[i];
        
    }
    
    printf("%.0f",  *soma/3);
    
}