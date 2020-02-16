#include "sudoku.h"
#include <ctype.h>

int sudoku_read(sudoku s, char *puzzle)
{
    int x, y, ch;

    for (y = 0; y < 9; ++y)
        for (x = 0; x < 9; ++x) {
            ch = *puzzle++;
            if (!ch || !isdigit(ch))
                return 0;

            s[y][x] = ch - 48;
        }

    return 1;
}
