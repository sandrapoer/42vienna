#include <unistd.h>
#include <stdlib.h>

// Grid size = nxn
// input size = n² (array len including spaces = nx2-1)


#define SIZE 4

static void print_grid(int grid[SIZE][SIZE])
{
    char c;
    int  row;
    int  col;

    row = 0;
    while (row < SIZE)
    {
        col = 0;
        while (col < SIZE)
        {
            c = (char)('0' + grid[row][col]);
            write(1, &c, 1);
            if (col < SIZE - 1)
                write(1, " ", 1);
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}

int main(void)
{
    int grid[SIZE][SIZE] = {0};

    print_grid(grid);
    return (0);
}
