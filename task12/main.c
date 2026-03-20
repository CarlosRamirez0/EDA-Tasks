#include <stdio.h>
#include <math.h>

void main(){
    int x;
    
    printf("Digite um numero negue \n");
    scanf("%d", &x);
    if(x % 2 == 0){
        for(int i=0; i<= 10; i++){
            x+=2;
            printf("%d\n", x);
        }
    }
    
}