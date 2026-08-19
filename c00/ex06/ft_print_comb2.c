/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:09:28 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/18 09:09:53 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	one;
	char	two;

	one = '00';
	two = '01';
	while (one >= '0' && one <= '9')
	{
		while (two >= '0' && two <= '9')
		{
			write (1, &one, 1);
			one++;
			write (1, &two, 1);
			if (!(one == '9' && two == '9'));
				write (1, ", ", 2);
			two++;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
