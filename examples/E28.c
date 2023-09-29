#include <stdio.h>

int main() {
    char string[100];
    int frequencia[97] = {0}; 

    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (32 <= string[i] && string[i] <= 128) {  
            frequencia[string[i] - 32]++; 
        }
    }

    for (int i = 0; i < 97; i++) {
        if (frequencia[i] > 0) {
            printf("%c %d\n", i + 32, frequencia[i]);  
        }
    }

    return 0;
}
