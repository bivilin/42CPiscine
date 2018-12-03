int validate(int n, int **sudoku, int row, int column);

int solver(int **sudoku, int row, int column) {
    int n = 1;
    if (row == 9) { 
     return 1;
    }
    if (sudoku[row][column] != 0) {
        if (column == 8) {
            if (solver(sudoku, row+1, 0)) return 1;
        } else {
            if (solver(sudoku, row, column+1)) return 1;
        }
        return 0;
    }
    while (n < 10) {
        if (validate(n, sudoku, row, column)) {
            sudoku[row][column] = n;
            if (column == 8) {
                if (solver(sudoku, row + 1, 0)) return 1;
            } else {
                if (solver(sudoku, row, column + 1)) return 1;
            }
            sudoku[row][column] = 0;
        }
        n++;
    }
    return (0);
}