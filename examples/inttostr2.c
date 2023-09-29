#include <stdio.h>

int main(){
    int i, num;
    char str[100];

    scanf("%d", &num);

    for(i = 0; num >= 1; i++){
        str[i] = '0' + num % 10;
        num = num / 10;
    }
    str[i] = '\0';

    for(int j = 0; j < i / 2; j++){
        int temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("%s", str);

    return 0;
}