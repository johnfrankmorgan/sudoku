#include "sudoku.h"

int sudoku_possible(sudoku s, int x, int y, int n)
{
    int i, j, x0, y0;

    for (i = 0; i < S_MAX; ++i)
        if (s[i][x] == n || s[y][i] == n)
            return 0;

    x0 = (x / S_SQU) * S_SQU;
    y0 = (y / S_SQU) * S_SQU;

    for (i = 0; i < S_SQU; ++i)
        for (j = 0; j < S_SQU; ++j)
            if (s[y0 + i][x0 + j] == n)
                return 0;

    return 1;
}
