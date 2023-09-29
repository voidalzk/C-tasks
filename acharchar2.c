#include <stdio.h>

int achar(char *s, int c) {
    int i = 0;
    while (*s) {
        if (c == *s) {
            return i;
        }
        s++;
        i++;
    }
    return -1;
}

int main() {
    int i;
    char str[100];
    char ch;

    scanf("%s", str);

    getchar();

    scanf("%c", &ch);

    int resultado = achar(str, ch);

    if (resultado != -1) {
        printf("achou %d\n", resultado);
    } else {
        printf("nao achou\n");
    }

    return 0;
}
