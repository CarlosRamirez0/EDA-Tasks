/* 
29. Faça um programa que leia a quantidade de dias de permanência no hotel de
cada hóspede. Sabe-se que o valor da diária é R$ 150,00. Aplique as regras da
tabela abaixo para determinar o valor a pagar por cada hóspede. Para finalizar
deve ser informado zeros para a quantidade de diárias. Calcule e imprima:

    Quantidade Diárias           Percentual desconto
     Até 5 diárias 13. 5%        13. 5%
     De 6 a 10 diárias           15. 10 %
     Acima de 10 diárias         17. 15%

    a) Quantidade de hóspedes que ficou mais de 20 dias no hotel;
    b) Valor de cada hóspede;
    c) Média do valor das contas pagas pelos hóspedes.
    d) Média dias permanência;
    e) O valor da maior conta paga
*/
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_HOST_SIZE 5
#define CALC_VALUE(days, descount) (float)(days*150.0) - (float)(descount * 100.0/150.0)
#define MEDIAN(value, total) (float)value/(float)total

typedef struct{
    int diarias;
    float value;
} Hospede;

typedef struct{
    int plus_tweny;
    float greatest_host;
    float median_values;
    float median_days;
} DATA;

DATA data = {0};
Hospede hosts[MAX_HOST_SIZE];
size_t i=0; // Quantidade atual

float calc_descount(int diarias)
{   
    if(diarias <= 5) return  5.0;
    if(diarias >= 6 && diarias <= 10) return 10.0;
    return 15.0;
}
void print_host_values()
{
    for(int j = 0; j < i; j++){
        printf("[host(%d): %.2f ]", j+1, hosts[j].value);
        printf("\t");
        if(j == 5) printf("/n");
    }
    printf("\n");
}


void print_data(){
    printf("Quantidade de hóspedes que ficou mais de 20 dias no hotel: %d\n", data.plus_tweny);
    printf("Valor de cada hóspede:\n");
    print_host_values();

    printf("Média do valor das contas pagas pelos hóspedes: %.2f\n", data.median_values);
    printf("Média dias permanência: %.2f\n", data.median_days);

    printf("O valor da maior conta paga: %.2f\n", data.greatest_host);

}

void main()
{      
    int diaria;
    int greater_value=0;

    float value_total = 0;
    float dias_total = 0;
    
    assert(MAX_HOST_SIZE > -1 );

    while(1){    
        printf("Digite a quantidade de dias: ");
        scanf("%d", &diaria);
        getchar();

        if(diaria == 0) break;

        hosts[i] = (Hospede){
            .diarias = diaria,
            .value = CALC_VALUE(diaria, calc_descount(diaria))
        };

        if(hosts[i].value > greater_value)greater_value = hosts[i].value;
        if(diaria > 20) data.plus_tweny += 1;

        value_total += hosts[i].value;
        dias_total  += hosts[i].diarias;

        i++;
        if(i == MAX_HOST_SIZE) {printf("LIMITE ATINGIDO\n"); break;}
    }
    data.greatest_host = greater_value;
    data.median_days = MEDIAN(dias_total, i);
    data.median_values = MEDIAN(value_total, i);

    print_data();


}
