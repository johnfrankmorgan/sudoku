#include "sudoku.h"

int sudoku_solve(sudoku s)
{
    int x, y, n;

    for (x = 0; x < 9; ++x) {
        for (y = 0; y < 9; ++y) {
            if (s[y][x])
                continue;

            for (n = 1; n < 10; ++n) {
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
