#include "sudoku.h"
#include <ctype.h>

int sudoku_read(sudoku s, char *puzzle)
{
    int x, y, ch;

    for (y = 0; y < S_MAX; ++y)
        for (x = 0; x < S_MAX; ++x) {
            ch = *puzzle++;
            if (!ch || !isdigit(ch))
                return 0;

            s[y][x] = ch - 48;
        }

    return 1;
}
