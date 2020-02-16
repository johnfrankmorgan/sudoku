#include "sudoku.h"

int sudoku_solve(sudoku s)
{
    int x, y, n;

    for (x = 0; x < S_MAX; ++x) {
        for (y = 0; y < S_MAX; ++y) {
            if (s[y][x])
                continue;

            for (n = 1; n < (S_MAX + 1); ++n) {
                if (!sudoku_possible(s, x, y, n))
                    continue;

                s[y][x] = n;
                if (sudoku_solve(s))
                    return 1;

                s[y][x] = 0;
            }
            return 0;
        }
    }
    return 1;
}
