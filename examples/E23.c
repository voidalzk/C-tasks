#include <stdio.h>

int main(){
    int i;
    char str[32];

    gets(str);

    str[32] = '\0';

    for (int i = 0; i < 32; i++) {
        printf("%c", str[i]);
        if ((i + 1) % 4 == 0) {
            printf(" "); 
        }
    }
    
}

/*
#include <string.h>
#include <stdio.h>
void separador(char *palavra) {
    for(int i=0; i < 32; i++) {
        if(i%4 == 0 && i != 0 ) {
            printf(" %c", *palavra);
            palavra++;
        }
        else {
            printf("%c", *palavra);
            palavra++;
        }
    }
    printf("\n");
}
int main(){
    char binario[33];
    binario[33] = '\0';
    gets(binario);
    separador(binario);
    return 0;
}
*/