#include <stdio.h>
#include <string.h>

int main(){
    int i, num = 0;
    char str[100];

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++){
        num = num * 10 + (str[i] - '0');
    }

    printf("%d", num);

    return 0;
}