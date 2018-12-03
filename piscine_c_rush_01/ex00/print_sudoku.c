void ft_putchar(char c);

void print_sudoku(int **sudoku)
{
    int c;
    int r;

    r = 0;
    while (r < 9)
    {
        c = 0;
        while (c < 9)
        {
            ft_putchar(sudoku[r][c] + '0');
            ft_putchar(' ');
            c++;
        }
        ft_putchar('\n');
        r++;
    }
}