#include <stdio.h>

int main(){
    int i, iguais = 1;
    char s1[100], s2[100];

    scanf("%s", s1);
    scanf("%s", s2);

    for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
        if(s1[i] != s2[i]){
            iguais = 0;
            break;
        } 
    }

    if(iguais == 1){
        printf("sao iguais");
    } else{
        printf("diferentes: %c %c", s1[i], s2[i]);
    }

    return 0;
}