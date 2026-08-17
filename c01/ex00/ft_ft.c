// header

#include <unistd.h>
void	ft_ft(int	*nbr)
{
	*nbr = 42;
}

/*
// convert double digit numbers ino characters
void	ft_nr2char(int	nbr)
{
	char c;

	if (nbr >= 10)
		ft_nr2char(nbr / 10);
	// '0' converts incoming int into char
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	number = 0;

	ft_ft(&number);
	ft_nr2char(number);
	write(1, "\n", 1);
	return(0);
}
*/