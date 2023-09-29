#include <stdio.h>
#include <string.h>

#define NUM 10
#define LEN 100

int main(){
    int i, j;
    char lista[NUM][LEN];
    int indices[NUM];


    for(i = 0; i < NUM; i++){
        scanf("%s", lista[i]);
        indices[i] = i;
    }

    for(i = 0; i < NUM; i++){
        for(j = i + 1; j < NUM; j++){
            if(strcmp(lista[indices[i]], lista[indices[j]]) > 0){
                int temp = indices[i];
                indices[i] = indices[j];
                indices[j] = temp;
            }
        }
    }

    for(i = 0; i < NUM; i++){
        printf("%d\n", indices[i]);
    }


    return 0;
}
