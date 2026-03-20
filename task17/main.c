#include <stdio.h>
#include <math.h>

void main(){
    float x,y;
    
    printf("Digite um lado\n");
    scanf("%f", &x);
    printf("Digite outro lado\n");
    scanf("%f", &y);
    
    float hipo = sqrt(x*x + y*y);
    
    printf("%.2f", hipo);
}