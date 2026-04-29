/*
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados
de altura e sexo (0=masc, 1=fem) das pessoas. Faça um programa que leia 50
dados diferentes e informe:
a) A média de altura das mulheres;
b) A média de altura da população;
c) O percentual de homens na população;
d) A quantidade de mulheres;
e) O percentual das mulheres abaixo de 1.65 m
----------------------------------------------------------------------------

Não foi informado o formato dos dados que o programa receberá./
E como será feita a leitura dos dados(mock ou stdin)/

*/
#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 50
#define MEDIAN(size, total) ((float)(size) * (100/total))

typedef struct{
    int     type;
    float height;
} DATA;

typedef struct{
    float   F_MEDIAN;
    float   M_MEDIAN;
    float   MEDIAN  ;
    float   Pequenas_Percent;

    int     F_count;
    int     M_count;
} Analysis;

/**
 * n -> número de DATA
 * returns -> pointer para um array de DATA na heap
 */
DATA* make_data(int n)
{
    DATA* dados = malloc(sizeof(DATA) * n);
    for(size_t i = 0; i < n; i++){
        dados[i] = (DATA){
            .type = (rand()+ 1) % 2,
            .height = ((float)rand()/(float)(RAND_MAX)) * 2
        };
        if(dados[i].height < 1 ) dados[i].height += 1;
    }
    return dados;
}
void print_data(DATA *data){
    printf("Altura: %.2f\n", data->height);

    if(data->type == 1) printf("Genero: feminino\n");
    if(data->type == 0) printf("Genero: masculino\n");
}

Analysis data_analysis(DATA *data)
{   
    int fcount=0, mcount=0; 
    float fmedian=0, mmedian=0, pequenina=0, median;

    for(size_t i = 0; i < DATA_SIZE; i++){
        if(data[i].type == 0) {
            mcount += 1;
            mmedian += data[i].height;
        }
        else{
            fcount += 1;
            fmedian += data[i].height;
            if(data[i].height < 1.65) pequenina += 1;
        }

        median += data[i].height;
    }
    median = (float)((float)median/DATA_SIZE);
    fmedian = (float)((float)fmedian/(float)fcount);
    mmedian = (float)((float)mmedian/(float)mcount);
    pequenina = ((float)MEDIAN(pequenina, fcount)); 
    
    return (Analysis){
        .F_count=fcount, 
        .M_count=mcount,
        .F_MEDIAN=fmedian,
        .M_MEDIAN=mmedian,
        .MEDIAN= median,
        .Pequenas_Percent=pequenina
    };
}

void print_metrics(Analysis anal)
{
    printf("A media da altura das mulheres: %.2f\n", anal.F_MEDIAN);
    printf("A media de altura da populacao: %.2f\n", anal.MEDIAN);
    printf("A porcentagem de homens na populacao: %.2f%%\n", MEDIAN(anal.M_count, DATA_SIZE));
    printf("A quantidade de mulheres %d\n", anal.F_count);
    printf("A porcentagem de mulheres abaixo de 1.65: %.2f%%", anal.Pequenas_Percent);
}


void main()
{
    
    DATA* data = make_data(DATA_SIZE);
    Analysis anal = data_analysis(data);
    print_metrics(anal);
}