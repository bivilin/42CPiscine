#include <stdlib.h>

int **convert_sudoku(char **original_sudoku)
{
    int c;
    int r;
    int **new_sudoku;

    new_sudoku = (int**)malloc(sizeof(int *) * 9);
    r = 1;
    while (r < 10)
    {
        c = 0;
        while (c < 9)
        {
            if (original_sudoku[r - 1][c] == '.')
                new_sudoku[r][c] = 0;
            else
                new_sudoku[r][c] = (original_sudoku[r - 1][c] - '0');
            c++;
        }
        r++;
    }
    return (new_sudoku);
}