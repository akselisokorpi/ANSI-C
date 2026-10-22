#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("too few args");
        return 1;
    }
    else
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int i = 0;
        int j = 0;

        if (argc <= 3)
        {
            return 0;
        }
        else
        {
            bool first = true;
            bool printed = false;

            for (i = a; i <= b; i++)
            {
                bool divisible = false;

                for (j = 3; j < argc; j++)
                {
                    if (i % atoi(argv[j]) == 0) divisible = true;
                    else continue;
                }

                if (!divisible && first) 
                {
                    first = false; 
                    printed = true;
                    printf("%d", i);
                }
                else if (!divisible && !first) printf(" %d", i);
            }
            if (printed) printf("\n");
        }
    }

    return 0;
}