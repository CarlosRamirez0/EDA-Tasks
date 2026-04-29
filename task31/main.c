#include <stdio.h>

#define CIGAR_PER_CARTEIRA 20
void main(){
    int n, x;
    float price;
start:
    printf("Quantos anos fumando?: ");    
    int flag = scanf("%d", &n);    
    getchar();
    if(n < 0) goto start;

    printf("Quantos cigarros por dia?: ");    
    flag = scanf("%d", &x);    
    getchar();
    if(n < 0) goto start;

    printf("Qual o preco da carteira de cigarro?: ");    
    flag = scanf("%f", &price);    
    getchar();
    if(n < 0 || flag != 1) goto start;

    printf("Você gastou R$%.2f em cigarro", (float)((n * 365 * x) * price * CIGAR_PER_CARTEIRA));
}