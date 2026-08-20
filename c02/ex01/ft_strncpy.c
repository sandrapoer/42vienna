/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 13:56:43 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/19 15:49:27 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((c < n) && (src[c] != '\0'))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned	int	n;
	char	src[] = "defgh";
	char	dest[] = "abc";
	
	n = 6;
	printf("%s", ft_strncpy(dest, src, n));
	return(0);
}
*/
