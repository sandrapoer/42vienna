/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:11:15 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/18 09:11:36 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int x;

    x = *a;
    *a = *b;
    *b = x;
}

/*
void	ft_nr2char(int	nbr)
{
	char c;

	if (nbr >= 10)
		ft_nr2char(nbr / 10);
	// '0' converts incoming int into char
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
    int a = 1;
    int b = 2;

    ft_swap(&a, &b);
    ft_nr2char(a);
    write(1, " ", 1);
    ft_nr2char(b);
    write(1, " ", 1);
    return(0);
}
*/
