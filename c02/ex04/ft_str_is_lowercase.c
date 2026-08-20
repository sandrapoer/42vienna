/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:42:48 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 11:10:27 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z'))
			return (0);
		c++;
	}
	return (1);
}

/*
int main(void)
{
    char    str1[] = "text";
    char    str2[] = "TEXT";
    char    str3[] = "";
    char    str4[] = "T3xt";

    printf("%d", ft_str_is_lowercase(str1));
    printf("%d", ft_str_is_lowercase(str2));
    printf("%d", ft_str_is_lowercase(str3));
    printf("%d", ft_str_is_lowercase(str4));
    return(0);
}
*/
