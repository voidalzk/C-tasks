#include <stdio.h>
#include <string.h>

int main(){
    int i, tamanho;
    char str[100];
    int freq[256] = {0};

    scanf("%s", str);
    tamanho = strlen(str);

    for(i = 0; i < tamanho; i++){
        freq[(int)str[i]]++;
    }

    for(i = 0; i < 256; i++){
        if(freq[i] > 0){
            printf("%c %d\n", (char)i, freq[i]);
        }
    }

    return 0;
}