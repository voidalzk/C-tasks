#include <stdio.h>
#include <string.h>

int min(int a, int b, int c) {
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}

int levenshtein_distance(const char *str1, const char *str2) {
    int lenStr1 = strlen(str1);
    int lenStr2 = strlen(str2);
    int tab[lenStr1 + 1][lenStr2 + 1];

    for (int X = 0; X <= lenStr1; X++) {
        tab[X][0] = X;
    }

    for (int Y = 0; Y <= lenStr2; Y++) {
        tab[0][Y] = Y;
    }

    int cost;
    for (int X = 1; X <= lenStr1; X++) {
        for (int Y = 1; Y <= lenStr2; Y++) {
            if (str1[X - 1] == str2[Y - 1]) {
                cost = 0;
            } else {
                cost = 1;
            }

            tab[X][Y] = min(
                tab[X - 1][Y] + 1,   
                tab[X][Y - 1] + 1,     
                tab[X - 1][Y - 1] + cost   
            );
        }
    }

    return tab[lenStr1][lenStr2];
}

int main() {
    const char *str1 = "kitten";
    const char *str2 = "sitting";

    int distance = levenshtein_distance(str1, str2);

    printf("Levenshtein distance between '%s' and '%s' is %d\n", str1, str2, distance);

    return 0;
}

