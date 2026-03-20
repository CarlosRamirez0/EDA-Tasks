#include <stdio.h>

void main(){
    char text[5] = "%d \n";
    for(int i=0; i < 5; i++){
        printf(text, i);
    }
}