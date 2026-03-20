#include <stdio.h>
#include <math.h>

// contar positivos, negativos e zeros

int positivo(int *x){
    if(*x >= 1) return 1;
    return 0;        
}
int negativo(int *x){
    if(*x < 0) return 1;
    return 0;
}
int zero(int *x){
   if(*x == 0) return 1;
    return 0;      
}

void main(){
    int list[5];
    int p=0, n=0, z=0;
    
    for(int i=0;i<5;i++){
        printf("Digite um numero:\n");
        scanf("%d", &list[i]);
        
        p += positivo(&list[i]);
        n += negativo(&list[i]);
        z += zero(&list[i]);
        
    }
    printf("O resultado foi:\n");
    printf("Positivos: %d \n Negativos: %d,\n Zeros: %d", p, n, z);
    
}