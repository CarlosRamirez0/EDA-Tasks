#include <stdio.h>
#include <math.h>

void main(){
    double x, y;
    
    printf("Digite um numero\n");
    scanf("%lf", &x);
    printf("Digite um numero\n");
    scanf("%lf", &y);
    
    printf("%.2lf \n", pow(x,y));
    printf("%.2lf \n", pow(y,x));

    
}