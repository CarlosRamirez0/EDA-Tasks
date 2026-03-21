#include <stdio.h>

int main(){
    int i=1, j=50;
    double soma = 0;
    for(;;){
       if(j == 0) break;

        soma += (i/j);

        i++;
        j--;
    }
    printf(" O resultado foi %.2f", soma);
}