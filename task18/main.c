#include <stdio.h>
#include <math.h>


void main(){
    int x;
    
    printf("Digite um numero\n");
    scanf("%d", &x);
    for(int i=0; i<=10; i++){
        
        printf("%d X ", x);
        printf("%d = ", i);
        printf("%d\n", x * i);
        
    }
    
}