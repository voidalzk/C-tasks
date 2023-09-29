
#include <stdio.h>
 
// Function that convert Decimal to binary
int decToBinary(int n)
{
  
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
              printf("1");
        else printf("0");
    }
}
 
// driver code
int main()
{
    int n = -1;
    decToBinary(n);
}