/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:10:51 by spoernba          #+#    #+#             */
/*   Updated: 2026/08/18 09:10:57 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ultimate_ft(int  ********nbr)
{
    ********nbr = 42;
}

/*
void ft_nr2char(int nbr)
{
    char c;

    if (nbr >= 10)
        ft_nr2char(nbr / 10);
    c = (nbr % 10) + '0';
    write(1, &c, 1);
}

int main(void)
{
    int number = 0;

    int * pN1 = &number;
    int ** pN2 = &pN1;
    int *** pN3 = &pN2;
    int **** pN4 = &pN3;
    int ***** pN5 = &pN4;
    int ****** pN6 = &pN5;
    int ******* pN7 = &pN6;
    int ******** pN8 = &pN7;
    // the function wants the fully wrapped 8-star pointer
    ft_ultimate_ft(pN8);
    ft_nr2char(number);
    write(1, "\n", 1);
    return(0);
}
*/
