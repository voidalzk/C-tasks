#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][50]; 
    int indices[10];   
    
    for (int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
        indices[i] = i; 
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (strcmp(nomes[indices[i]], nomes[indices[j]]) > 0) {
                int temp = indices[i];
                indices[i] = indices[j];
                indices[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", indices[i]);
    }

    return 0;
}