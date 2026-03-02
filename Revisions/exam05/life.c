#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **new_map(int w, int h)
{
    char **m = calloc(h + 1, sizeof(char *));
    int i = -1, j;
    while(++i < h)
        for (m[i] = calloc(w + 1, 1), j = -1; ++j < w;)
            m[i][j] = ' ';
    return m;
}

