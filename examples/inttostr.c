#include <stdio.h>
#include <string.h>

int main(){
    int i = 0, num;
    char str[100];

    scanf("%d", &num);

    while(num > 0){
        str[i] = num % 10 + '0';
        num /= 10;
        i++;
    }

    for (int j = 0; j < i / 2; j++) {
        int temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    str[i] = '\0';
    
    printf("%s", str);

    return 0;
}