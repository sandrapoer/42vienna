/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 09:24:02 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/22 20:46:04 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (s1[c1] && s2[c2] && s1[c1] != '\0')
	{
		c1++;
		c2++;
	}
	return ((unsigned char)s1[c1] - (unsigned char)s2[c2]);
}

/*
int main(void)
{
	char	str1[]="hello";
	char 	str2[]="hellooo";
	printf("strcmp does this:\n");
	printf("%d", strcmp(str1, str2));
	printf("\n my f should do the same\n");
	printf("%d", ft_strcmp(str1, str2));
	return(0);
}
*/
