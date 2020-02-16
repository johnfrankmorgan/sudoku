#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define errorf(...) fprintf(stderr, __VA_ARGS__)
#define fatalf(...)          \
    do {                     \
        errorf(__VA_ARGS__); \
        exit(1);             \
    } while (0)

typedef int sudoku[9][9];

int sudoku_read(sudoku s, char *puzzle);
int sudoku_possible(sudoku s, int x, int y, int n);
int sudoku_solve(sudoku s);
void sudoku_print(sudoku s);

#endif /* SUDOKU_H */
