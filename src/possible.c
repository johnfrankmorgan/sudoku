#include "sudoku.h"

int sudoku_possible(sudoku s, int x, int y, int n)
{
    int i, j, x0, y0;

    for (i = 0; i < 9; ++i)
        if (s[i][x] == n || s[y][i] == n)
            return 0;

    x0 = (x / 3) * 3;
    y0 = (y / 3) * 3;

    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            if (s[y0 + i][x0 + j] == n)
                return 0;

    return 1;
}
