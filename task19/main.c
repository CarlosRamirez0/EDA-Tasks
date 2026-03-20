#include <stdio.h>
#include <math.h>

// contar positivos, negativos e zeros

int positivo(int *x){
    if(*x >= 1) return 1;
    return 0;        
}

void main(){
    int list[5];
    int p=0;
    
    for(int i=0;i<5;i++){
        printf("Digite um numero:\n");
        scanf("%d", &list[i]);
        
        p += positivo(&list[i]);
        
    }
    printf("O resultado foi:\n");
    printf("Positivos: %d ", p);
}