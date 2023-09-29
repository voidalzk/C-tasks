#include <stdio.h>

int myStrLen(char *string){
    int contador = 0;

    while(string[contador] != '\0'){
        contador++;
    }
    return contador;
}

int main(){
    int i, j, tamanho;
    char str[100];

    scanf("%s", str);

    tamanho = myStrLen(str);

    for(i = 1; i <= tamanho; i++){
        for(j = 0; j < i; j++){
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}