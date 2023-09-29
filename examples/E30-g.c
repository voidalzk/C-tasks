#include <stdio.h>

int main() {
    char nomes[10][100];
    int indices[10];

    for (int i = 0; i < 10; i++) {
        scanf("%s", nomes[i]);
        indices[i] = i;
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            int k = 0;
            while (nomes[indices[i]][k] != '\0' && nomes[indices[j]][k] != '\0' && nomes[indices[i]][k] == nomes[indices[j]][k]) {
                k++;
            }
            if (nomes[indices[i]][k] > nomes[indices[j]][k]) {
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
