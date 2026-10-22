#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("too few args");
        return 1;
    }
    else
    {
        int i = 1;
        for (i = i; i < argc; i++)
        {
            int i_strlength = strlen(argv[i]);
            printf("%d: %s (pituus: %u)\n", i, argv[i], i_strlength);
        }
    }

    return 0;
}