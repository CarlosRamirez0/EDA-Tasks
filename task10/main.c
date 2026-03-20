#include <stdio.h>
#include <math.h>


void main(){
    int x, y;
    
    printf("Digite um numero\n");
    scanf("%d", &x);
    printf("Digite um numero\n");
    scanf("%d", &y);
    
    int res = x/y;
    
    
    printf("%.0lf \n", res);
    
    
}