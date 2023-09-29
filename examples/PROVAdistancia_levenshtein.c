/*
custo 1 para simbolos diferentes
custo 0 para simbolos iguais

 Função LevenshteinDistance(Caracter : str1[1..lenStr1], Caracter : str2[1..lenStr2]) : INTEIRO
Início
   // tab é uma tabela com lenStr1+1 linhas e lenStr2+1 colunas
   Inteiro:  tab[0..lenStr1, 0..lenStr2]
   // X e Y são usados para iterar str1 e str2
   Inteiro:  X, Y, cost
 
   Para X de 0 até lenStr1
       tab[X, 0] ← X
   Para Y de 0 até lenStr2
       tab[0, Y] ← Y
 
   Para X de 1 até lenStr1
       Para Y de 1 até lenStr2
           Se str1[X] = str2[Y] Então cost ← 0
                                Se-Não cost ← 1 // Custo da substituição deve ser 1, deleção e inserção
           tab[X, Y] := menor(
                                tab[X-1, Y  ] + 1,     // Deletar
                                tab[X  , Y-1] + 1,     // Inserir
                                tab[X-1, Y-1] + cost   // Substituir
                            )
   LevenshteinDistance ← tab[lenStr1, lenStr2]   // eq a return
Fim

*/

// A função LevenshteinDistance calcula a distância de Levenshtein entre duas strings.
// A distância de Levenshtein é o número mínimo de operações (inserção, deleção ou substituição)
// necessárias para transformar uma string na outra.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int min(int a, int b, int c) {
    int res;

    if (a < b) {
        res=a;
    } 
    else {
        res=b;
    } 
    if (res > c) {
        res=c;
    }
    return res;
}

int LevenshteinDistance(char str1[], char str2[]) {
    int lenStr1 = strlen(str1);
    int lenStr2 = strlen(str2);
    
    // tab é uma tabela com lenStr1+1 linhas e lenStr2+1 colunas
    int tab[lenStr1 + 1][lenStr2 + 1];
    
    // X e Y são usados para iterar str1 e str2
    int X, Y, cost;
 
    // Inicializa a primeira linha e a primeira coluna da tabela
    for (X = 0; X <= lenStr1; X++)
        tab[X][0] = X;
    
    for (Y = 0; Y <= lenStr2; Y++)
        tab[0][Y] = Y;
 
    // Preenche a tabela usando a abordagem dinâmica
    for (X = 1; X <= lenStr1; X++) {
        for (Y = 1; Y <= lenStr2; Y++) {
            if (str1[X - 1] == str2[Y - 1])
                cost = 0;
            else
                cost = 1;
            
            tab[X][Y] = min(
                tab[X - 1][Y] + 1,     // Deletar
                tab[X][Y - 1] + 1,     // Inserir
                tab[X - 1][Y - 1] + cost   // Substituir
            );
        }
    }
    
    // O valor na última célula da tabela é a distância de Levenshtein entre as duas strings.
    return tab[lenStr1][lenStr2];
}

int main(void){
    char str1[] = "geladeira";
    char str2[] = "nada";

    printf("%d",(LevenshteinDistance(str1,str2)));
    return 0;
}



