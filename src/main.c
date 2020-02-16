#include "sudoku.h"

int main(int argc, char **argv)
{
    sudoku s;

    if (argc != 2)
        fatalf("Usage: %s PUZZLE\n", argv[0]);

    if (!sudoku_read(s, argv[1]))
        fatalf("Invalid puzzle %s\n", argv[1]);

    sudoku_print(s);
    sudoku_solve(s);
    printf("\n");
    sudoku_print(s);

    return EXIT_SUCCESS;
}
