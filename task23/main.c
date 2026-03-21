#include <stdio.h>
#include <stdlib.h>



int main(){
    float 
    height=0, 
    maxHeight=0, 
    minHeight=10, 
    mHeight=0, 
    wHeight=0,
    lastHeight=0;

    unsigned short int mcount=0, wcount=0, sexo, wPequena=0;

    for(;;){
        printf("Digite uma altura: \n");
        scanf("%f", &height);
        

        printf("Digite o sexo: \n");
        scanf("%d", &sexo);
        
        if(height > maxHeight) maxHeight = height;
        if(height != 0){
            if(height < minHeight) minHeight = height;
        }

        if(sexo == 1) {
            mcount += 1;
            mHeight += height;
        }
        else if (sexo == 2){
            wcount += 1;
            wHeight += height; 
            if(wHeight < 1.68) wPequena += 1;
        }
        if(height != 0) continue;
        printf("A maior altura é %.2f e a menor é %.2f\n", maxHeight, minHeight);
        printf("O numero de homens é:%d\n", mcount);
        printf("A media de altura das mulheres é: %.2f \n",(float)(wHeight/wcount));
        printf("O percentual de mulheres abaixo de 1.68 é: %d\n %", ((wPequena * 100)/wcount));
        break;
    }

}