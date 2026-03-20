#include <stdio.h>
#include <math.h>


void main(){
    int list[10];
    int p=0, impar=0;
    
    for(int i=0;i<10;i++){
        printf("Digite um numero");
        scanf("%d", &list[i]);
        
        if(list[i] % 2 == 0) p+= 1;
        else impar+=1;
        
    }
    printf("O resultado foi:\n");
    printf("Pares: %d ", p);
    printf("Impares: %d ", impar);
    
}