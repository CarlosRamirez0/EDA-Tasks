#include <stdio.h>

void print_until_n(int n)
{
    for(int i=1; i <= n;i++){
        for(int j = 0;j < i;j++){
            printf("%d", i);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    print_until_n(n);
    
}