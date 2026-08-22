/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sandra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:00:21 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/22 19:58:55 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Functions explained in file solve_puzzle.c*/
int	solve_puzzle(int grid[4][4], int *inputs, int position);

/* This function checks if there are 31 chars in the input and if the digits
   on even indices are form 1 to 4*/

int	check_format(char *arg)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (i % 2 == 1)
		{
			if (arg[i] != ' ')
				return (0);
		}
		else if (arg[i] < '1' || arg[i] > '4')
			return (0);
		i++;
	}
	if (arg[31] != '\0')
		return (0);
	return (1);
}

/*This function checks the argument with check_format, then changes
  the string into integers */

void	fill_inputs(char *arg, int *inputs)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 31)
	{
		if (arg[i] != ' ')
		{
			inputs[j] = arg[i] - '0';
			j++;
		}
		i++;
	}
}

/*This function checks the format of the input*/
int	input_parser(char *arg, int *inputs)
{
	if (!check_format(arg))
		return (0);
	fill_inputs(arg, inputs);
	return (1);
}

/* This function creates the grid wiht spaces
  is nonsense? -> needs to be filled with zeros
  and NOT printed
void	print_grid(int grid[4][4])
{
	char	c;
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = (char)('0' + grid[row][col]);
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
*/


int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	inputs[16];
	int i;
	
	i = 0;
	while (i < 16)
	{
		grid[i / 4][i % 4] = 0;
		i++;
	}
	if (argc != 2 || !input_parser(argv[1], inputs))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!solve_puzzle(grid, inputs, 0))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	//print_grid(grid);
	//return (0);
}
	
