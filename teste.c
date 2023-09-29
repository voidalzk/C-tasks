#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int contadorPalavras = 0;
    int dentroDaPalavra = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        // Verifica se o caractere atual é alfabético ou numérico
        if (isalnum((unsigned char)frase[i])) {
            // Se estiver dentro de uma palavra, continua
            if (!dentroDaPalavra) {
                dentroDaPalavra = 1;
                contadorPalavras++;
            }
        } else {
            // Se não for alfabético ou numérico e estiver dentro de uma palavra, sai
            if (dentroDaPalavra) {
                dentroDaPalavra = 0;
            }
        }
    }

    printf("Número de palavras: %d\n", contadorPalavras);

    return 0;
}
