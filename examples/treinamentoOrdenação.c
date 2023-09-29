#include <stdio.h>
#include <string.h>


int main(){
    int i, j, tamanho;
    char palavra[100];

    scanf("%s", palavra);

    tamanho = strlen(palavra);

    char *sufixos[tamanho];

    for(i = 0; i < tamanho; i++){
        sufixos[i] = &palavra[i];
    }

    for(i = 0; i < tamanho - 1; i++){
        for(j = i + 1; j < tamanho; j++){
            if(strcmp(sufixos[i], sufixos[j]) > 0){
                char *temp = sufixos[i];
                sufixos[i] = sufixos[j];
                sufixos[j] = temp;
            }   
        }
    }

    for(i = 0; i < tamanho; i++){
        printf("%s\n", sufixos[i]);
    }

    return 0;
}