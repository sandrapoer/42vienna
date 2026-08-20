/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 08:56:31 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 13:55:03 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z')
			&& (!(str[c] >= 'A' && str[c] <= 'Z')))
			return (0);
		c++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str1[] = "text";
	char	str2[] = "t ext";
	char	str3[] = "";
	char 	str4[] = "TEXT";

	printf("%d", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(str2));
    printf("%d", ft_str_is_alpha(str3));
    printf("%d", ft_str_is_alpha(str4));
	return(0);
}
*/
