#include <stdio.h>

int main(){
    char str[100];
    int num = 0, i;

    scanf("%s", &str);

    for(i = 0; str[i] != '\0'; i++){
        num = num * 10 + (str[i] - '0');
    }

    printf("%d", num);

    return 0;
}