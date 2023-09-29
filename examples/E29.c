#include <stdio.h>

int valorString(const char *str) {
    int valor = 0;
    for (int i = 0; str[i]; i++) {
        valor += (int)str[i];
    }
    return valor;
}


int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    
    fgets(str2, sizeof(str2), stdin);

    int valorStr1 = valorString(str1);
    int valorStr2 = valorString(str2);

    if (valorStr1 == valorStr2) {
        printf("Formam anagramas\n");
    } else {
        printf("Nao formam anagramas\n");
    }

    return 0;
}
