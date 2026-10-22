#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2) /*No arguments passed*/
    {
        printf("too few args");
        return 1;
    }
    else if (argc > 3) 
    {
        printf("too many args");
        return 1;
    }
    else 
    {
        if (atoi(argv[1]) && atoi(argv[2]))
        {
            char a = atoi(argv[1]);
            char b = atoi(argv[2]);

            if (a < b) /* Loop from a to b */
            {
                int i = a;
                for (i = i; i <= b; ++i) {
                    printf("%d: %c\n", i, i);
                }
            } 
            else 
            {
                printf("first arg must be > sec arg");
                return 1;
            }
        }
    }

    return 0;
}
