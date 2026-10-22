#include <stdio.h>
#include <stdbool.h>

bool isDivisible(int num)
{
    if (num % 2 == 0 || num % 3 == 0 ||num % 5 == 0) return true;
    else return false;
}

int main()
{
    for (int i = 0; i <= 100; i++) 
    {
        if (isDivisible(i)) continue;
        else {
            int x = i;
            printf("%i", x);    
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
