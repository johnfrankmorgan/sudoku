#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

#define errorf(...) fprintf(stderr, __VA_ARGS__)
#define fatalf(...)          \
    do {                     \
        errorf(__VA_ARGS__); \
        exit(1);             \
    } while (0)

#define S_MAX 9
#define S_SQU 3

typedef int sudoku[S_MAX][S_MAX];

int sudoku_read(sudoku s, char *puzzle);
int sudoku_possible(sudoku s, int x, int y, int n);
int sudoku_solve(sudoku s);
void sudoku_print(sudoku s);

#endif /* SUDOKU_H */
