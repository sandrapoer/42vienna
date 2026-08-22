#include <unistd.h>
#include <stdlib.h>

// Grid size = nxn
// input size = n² (array len including spaces = nx2-1)

int *get_grid(char *input, int *out_size)
{
    int i;
    int len;
    int size;
    int *grid;

    i = 0;
    while (input[i])
        i++;
    len = i;
    size = (len + 1) / 2;

    grid = malloc(sizeof(int) * size * size);
    if (!grid)
        return (NULL);

    i = 0;
    while (i < size * size)
    {
        grid[i] = 0;
        i++;
    }

    *out_size = size;
    return (grid);
}

int main(int argc, char **argv)
{
    int size;
    int *grid;
    int i;
    char ch;

    if (argc != 2)
        return (1);
    grid = get_grid(argv[1], &size);
    if (!grid)
        return (1);
    i = 0;
    while (i < size * size)
    {
        ch = (char)('0' + grid[i]);
        write(1, &ch, 1);
        if ((i + 1) % size == 0)
            write(1, "\n", 1);
        else
            write(1, " ", 1);
        i++;
    }
    free(grid);
    return (0);
}
