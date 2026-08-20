/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 09:49:30 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 16:18:11 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
		c++;
	}
	return (1);
}

/*
int main(void)
{
    char    str1[] = "text";
    char    str2[] = "123";
    char    str3[] = "";
    char    str4[] = "T3X1";

    printf("%d", ft_str_is_numeric(str1));
    printf("%d", ft_str_is_numeric(str2));
    printf("%d", ft_str_is_numeric(str3));
    printf("%d", ft_str_is_numeric(str4));
    return(0);
}
*/
