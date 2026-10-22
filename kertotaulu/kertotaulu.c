#include <stdio.h>

int main()
{
    int i = 1;
    int k = 1;
    int m = 1;
    
    printf("%4s", "x");
    for (i = 1; i <= 15; i++) {
        printf("%4i", i);
    }
    printf("\n");

    
    for (k = 1; k <= 15; k++) {
        printf("%4i", k);
        for (m = 1; m <= 15; m++) {
            int mult = k * m;
            printf("%4i", mult);
        }
        printf("\n");
    }
    return 0;
}
