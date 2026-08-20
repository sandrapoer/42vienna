/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:11:56 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 11:15:45 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'A' && str[c] <= 'Z'))
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

    printf("%d", ft_str_is_uppercase(str1));
    printf("%d", ft_str_is_uppercase(str2));
    printf("%d", ft_str_is_uppercase(str3));
    printf("%d", ft_str_is_uppercase(str4));
    return(0);
}
*/
