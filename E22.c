#include <stdio.h>

void func(char vet[], int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        vet[31 - i] = ((num >> i) & 1) ? '1' : '0';
    }
    vet[32] = '\0'; 
}

int main(void) {
    int num;
    char str[33];
    scanf("%d", &num);
    func(str, num);
    printf("%s\n", str);
    return 0;
}
