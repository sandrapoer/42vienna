/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 11:02:11 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/18 12:28:37 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int	main(void)
{
	int	c;
	int	d;

	c = 2;
	d = 3;
	ft_swap(&c, &d);
	printf("%d\n%d\n", c, d);
	return(0);
}
*/
