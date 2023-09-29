#include <stdio.h>

void troca(int *a, int *b){ 
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int i, j, indice[10];
    char lista[10][100];

    for(i = 0; i < 10; i++){
        scanf("%s", lista[i]);
        indice[i] = i;
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            int k = 0;
            while(lista[indice[i]][k] != '\0' && lista[indice[j]][k] != '\0' && lista[indice[i]][k] == lista[indice[j]][k]){
                k++;
            }
            if(lista[indice[i]][k] > lista[indice[j]][k]){
                troca(&indice[i], &indice[j]);
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", indice[i]);
    }

    return 0;
}