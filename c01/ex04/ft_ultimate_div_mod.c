/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 08:34:22 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/19 08:40:03 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

/*
int	main(void)
{
	int a;
	int b;

	a = 10;
	b=4;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return(0);
}*/
