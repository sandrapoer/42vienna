/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:16:50 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/20 11:35:09 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 32 && str[c] <= 126))
			return (0);
		c++;
	}
	return (1);
}

/*
int main(void)
{
    char    str1[] = "text ";
    char    str2[] = "TEXT	";
    char    str3[] = "";
    char    str4[] = "T3xt";

    printf("%d", ft_str_is_printable(str1));
    printf("%d", ft_str_is_printable(str2));
    printf("%d", ft_str_is_printable(str3));
    printf("%d", ft_str_is_printable(str4));
    return(0);
}
*/
