#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
    int temp = n;
    
    if(n == 0)
       return 1;
    
    for(; n > 1; n--)
    {
        temp *= n - 1;
    }
    
    return temp;
}

int main()
{
   int n = 5;

   printf("Fakultät von %d ist %d", n, fac(n));

   return 0;
}
