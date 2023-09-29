#include <stdio.h>

char *mystrcat_ptr(char *dest, char *orig) {
    char *p=dest,*q=orig;
    while( *p )
        p++;
    while( *q ) {
        *p = *q;
        p++;
        q++;
    }
   return dest;
}

int main(){
    
}