/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:11:49 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/18 09:11:53 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_div_mod(int  a, int  b, int  *div, int   *mod)
{
    int x;
    int y;

    x = a / b;
    y = a % b;
    *div = x;
    *mod = y;
}

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
    int a = 6;
    int b = 2;
    int c;
    int d;

    ft_div_mod(a, b, &c, &d);
    ft_nr2char(c);
    write(1, "\n", 1);
    ft_nr2char(d);
    write(1, "\n", 1);
    return(0);
}
