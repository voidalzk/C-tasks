#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[1000];
    int palavras = 0, i;
    int valida = 0;

    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++){
        if (isalnum((unsigned char)frase[i])){
            if(valida == 0){
                valida = 1;
                palavras++;
            }
        } else{
            if(valida == 1){
                valida = 0;
            }
        }
    }

    printf("%d", palavras);

    return 0;
}