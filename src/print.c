#include "sudoku.h"

void sudoku_print(sudoku s)
{
    int x, y;

    for (y = 0; y < 9; ++y) {
        for (x = 0; x < 9; ++x)
            printf("%d ", s[y][x]);
        printf("\n");
    }
}
