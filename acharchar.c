#include <stdio.h>
#include <string.h>

int main(){
    int i, n = 0, tamanho;
    char str[100], ch;

    scanf("%s", str);
    while (getchar() != '\n');
    scanf("%c", &ch);

    tamanho = strlen(str);

    for(i = 0; i < tamanho; i++){
        if(ch == str[i]){
            n++;
        }
    }

    printf("%d", n);

    return 0;
}
