/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 11:19:18 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/22 20:55:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
    char    str1[]="hello";
    char    str2[]="helloooo";

	printf("strncmp does this:\n");
	printf("%d", strncmp(str1, str2, 8));
	printf("\nMy function does this:\n");
    printf("%d", ft_strncmp(str1, str2, 8));
    return(0);
}
*/
