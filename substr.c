#include <stdio.h>
#include <string.h>

int main(){
    int i, j, lenstr, lensub;
    char str[100], subStr[100];

    int achou = 0;

    scanf("%s", str);
    scanf("%s", subStr);

    lenstr = strlen(str);
    lensub = strlen(subStr);

    for(i = 0; str[i]; i++){
        for(j = 0; j < lensub; j++){
            if(str[i + j] != subStr[j]){
                break;
            }
        }
        if(j == lensub){    
            achou = 1;
            printf("posicao: %d", i);
        }
    }
    
    return 0;    
}