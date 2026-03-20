#include <stdio.h>
#include <math.h>

typedef int *n;

void tabuada(n x){
    for(int i=0; i<=10; i++){
        
        printf("%d X ", *x);
        printf("%d = ", i);
        printf("%d\n", *x * i);
        
    }
}

void main(){
    int x;
    int y;
    
    for(;;){
        
        printf("Digite um numero\n");
        scanf("%d", &x);
        tabuada(&x);
        printf("---------------------------------- \n");
        
        printf("Deseja continuar? \n");
        printf("0 - Não \n");
        printf("1 - Sim \n");
        scanf("%d", &y);
        printf("---------------------------------- \n");
        if(y) continue;
        else break;
        
    }
}