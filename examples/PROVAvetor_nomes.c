/*****************************************************

Ordenar os nomes dos vetores sem alterar o vetor nomes

nomes[10][30] com 10 nomes
ind[10][]
if(strcmp(nomes[ind[j]], nomes[ind[j]]) > 0 ){
    aux = ind[i];
    ind[i] = ind[j];
    ind[j] = aux;
}

*****************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
    char nomes[10][100];
    int aux, i, j, ind[10];

    for (i = 0; i < 10; i++){
        printf("Informe o %d nome: ", i+1);
        gets(nomes[i]);
        ind[i] = i;
    }

    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if(strcmp(nomes[ind[i]], nomes[ind[j]]) > 0 ){
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
            } 
        }   
    }
    
    printf("Ord\tNome          \tInd\tNome ordenado\n");
    for (i = 0; i < 10; i++)  {
        printf("%2d\t%-10s\t%d\t%s\n",i,
        nomes[i], ind[i], nomes[ind[i]]);
    }
    return 0;
}
