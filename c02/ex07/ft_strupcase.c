/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:36:08 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 11:53:17 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}

/*
int	main(void)
{
    char    str[] = "this is NOT  lowercase";

    printf("%s", ft_strupcase(str));
    return(0);
}
*/
