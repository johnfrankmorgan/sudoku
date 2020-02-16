#include "sudoku.h"

void sudoku_print(sudoku s)
{
    int x, y;

    for (y = 0; y < S_MAX; ++y) {
        for (x = 0; x < S_MAX; ++x)
            printf("%d ", s[y][x]);
        printf("\n");
    }
}
