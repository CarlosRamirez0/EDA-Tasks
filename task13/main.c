#include <stdio.h>
#include <math.h>

void main(){
    int x;
    printf("Digite os numeros\n");
    scanf("%d", &x);
    for(int i=0; i<5; i++){
        x += 1;
        printf("%d\n", x);
    }
    
}