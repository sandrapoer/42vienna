#include <unistd.h>
#include <stdio.h>
#define DIMENSION 4

/*char	*ft_read_combinations(char *str)
{

}*/

char	error(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;



}




int	ft_valid_input(char *str, char *cols, char *rows, char *top, char *bottom, char *left, char *rigth)
{
	int	i;
	int	j;
	char	raw[16 + 1];	
//	char	cols[DIMENSION][2 + 1];
//	char	rows[DIMENSION][2 + 1];
	
	raw[16] = '\0';
	i = 0;
	while (i < 2 * 2 * DIMENSION)
	{
		if (('1' <= str[2 * i]) && (str[2 * i] <= '4'))
		{
			raw[i] = str[2 * i];
		}
		else
		{
			return 0;
		}		
		i++;
	}
	printf("%s", raw);
	printf("\n");
	printf("cols\n");
	i = 0;
	while (i < DIMENSION)
	{
		cols[i][0] = raw[i];
		cols[i][1] = raw[i + DIMENSION];
		cols[i][2] = '\0';
		printf("%s ", cols[i]);
		i++;
	}
	printf("\nrows\n");
	i = 0;
	while (i < DIMENSION)
	{
		rows[i][0] = raw[i + 8];
		rows[i][1] = raw[i + 8 + DIMENSION];
		rows[i][2] = '\0';
		printf("%s ", rows[i]);
		i++;
	}
/*	printf("\nleft\n");
	i = 0;
	while (i < DIMENSION)
	{
		printf("%c ", rows[i][0]);
		i++;
	}
	printf("\nright\n");
	i = 0;
	while (i < DIMENSION)
	{
		printf("%c ", rows[i][1]);
		i++;
	}
	printf("\ntop\n");
	i = 0;
	while (i < DIMENSION)
	{
		printf("%c ", cols[i][0]);
		i++;
	}
	printf("\nbottom\n");
	i = 0;
	while (i < DIMENSION)
	{
		printf("%c ", cols[i][1]);
		i++;
	}
*/	/* each side must contain only one 1 */
	/* each side must contain at least one 2, at most three */
	/* each side can contain at most two 3s */
	/* each side can only contain at most one 4 */
}


int	main(int argc, char *argv[])
{
	char	cols[DIMENSION][3];
	char	rows[DIMENSION][3];
	char	top[DIMENSION][3];
	char	bottom[DIMENSION][3];
	char	left[DIMENSION][3];
	char	rigth[DIMENSION][3];

	if (argc != 2)
	{
		//write(1, "Error\n", 6);
		printf("Error\n");
	}
	if (!ft_valid_input(argv[1], *cols, *rows, *top, *bottom, *left, *rigth))
	{
		printf("Error\n");
	}	
	return (0);
}
