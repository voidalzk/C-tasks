#include <stdio.h>

int contaDigitos(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

void numParaStr(int num, char *str) {
    int tamanho = contaDigitos(num);

    int i = tamanho - 1;
    while (num != 0) {
        str[i] = '0' + (num % 10);
        num /= 10;
        i--;
    }
    str[tamanho] = '\0'; 
}

int main() {
    int numero;
    char resultado[10]; 

    scanf("%d", &numero);

    numParaStr(numero, resultado);

    printf("%s", resultado);    
    
    return 0;
}
