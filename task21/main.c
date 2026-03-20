#include <stdio.h>
#include <math.h>


typedef int *number;

int multi(number x, number y){
    printf("%d X %d", *x, *y);
    printf(" = ");
    for(int i=0; i < *y; i++){
        
        printf("%d", *x);
        if(i < *y - 1) printf(" + ");
    }
}

void main(){
    int x, y;
    printf("Digite um numero\n");
    scanf("%d", &x);
    
    printf("Digite um numero\n");
    scanf("%d", &y);
    multi(&x, &y);
    
}