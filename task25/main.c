#include <stdio.h>

int main(){
    int l, c, n, area=0;
    
    for(;;){
       printf("Digite o tamanho do lado\n");
       scanf("%d", &l);
       printf("Digite o comprimento\n");
       scanf("%d", &c);
       
       area+=(l*c);
       printf("Deseja continuar??\n");
       scanf("%d", &n);
       if(n == 0) {
        printf("O resultado foi %d\n", area);
        break;
       }
    }
    
}