#include <stdlib.h>

int validate(int n, int **sudoku, int row, int column);
int solver(int **sudoku, int row, int column);
int **convert_sudoku(char **original_sudoku);
void print_sudoku(int **sudoku);
void ft_putstr(char *str);

int main(int argc, char **argv)
{
    int **sudoku;
    
    if (argc != 10)
    {   
        ft_putstr("Error\n");
        return (0);
    }
    sudoku = (int**)malloc(sizeof(int *) * 9);
    sudoku = convert_sudoku(argv);
    solver(sudoku, 0, 0);
    print_sudoku(sudoku);
    return (0);
}