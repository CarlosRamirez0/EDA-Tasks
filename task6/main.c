#include <stdio.h>
#include <math.h>

void main(){
    int x;
    
    printf("Digite um numero\n");
    scanf("%d", &x);


    if(x >= 0) printf("%.2f", sqrt(x));
    else printf("Não existe, tá maluco??")
    
}