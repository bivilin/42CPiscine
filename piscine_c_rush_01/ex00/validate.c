int validate(int n, int **sudoku, int row, int column) {
    int i;
    int r;
    int c;
    int sec_row;
    int sec_col;

    i = 0;
    sec_row = 3 * (row / 3);
    sec_col = 3 * (column / 3);
    
    r = 0;
    while (r < 3)
    {
        c = 0;
        while (c < 3)
        {
            if (sudoku[sec_row + r][sec_col + c] == n) return (0);
            c++;
        }
        r++;
        }
    while (i < 9) {
        if (sudoku[i][column] == n) return 0;
        if (sudoku[row][i] == n) return 0;
        i++;
    }
    return 1;
}