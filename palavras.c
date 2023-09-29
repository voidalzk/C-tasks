#include <stdio.h>
#include <string.h>
int main () {
int val = 1512;
char str[20];
sprintf( str, "%d", val);
printf("String value = %s, Int value = %d\n", str, val);
return(0);
}
