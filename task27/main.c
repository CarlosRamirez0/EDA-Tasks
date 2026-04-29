#include <stdio.h>


/* 
    Problemática: `Seja N um número quadrado perfeito. Se somarmos os números ímpares/
    consecutivos (1+3+5+7+9+...) até que esta soma seja igual a N, o número M de/
    termos somados será igual a raiz quadrada de N. Exemplo: N = 16 16 = 1 + 3 + 5/
    + 7 M = 4 termos. Logo, a raiz quadrada de 16 é 4. Devem ser solicitados vários/
    números. O programa deve ser finalizado quando for informado N zero.`
    -------------------------------------------------------------------------------
    A questão somente diz que serão solicitados vários números/
    e finalizará quando receber o número 0, logo a explicação sobre/
    o quadrado perfeito é totalmente irrelevante, e nada foi solicitado para ser impresso.

*/

void main()
{   
    int n;
    while(n != 0){
        printf("Digite um numero:");
        scanf("%d", &n);
        getchar();
    }
}