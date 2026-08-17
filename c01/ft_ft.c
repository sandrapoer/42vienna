// header

#include <unistd.h>
void	ft_ft(int	*nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number = 0
	
	ft_ft(&number);
	return(0);
}
