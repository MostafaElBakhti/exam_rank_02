/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 16:35:26 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/07 16:35:26 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int len = 0 ; 
    int test = nbr;

    if (nbr == 0)
        len = 1;
    while (test > 0)
    {
        test = test / 10 ; 
        len++ ; 
    }

    char *str = malloc(sizeof(char) * len + 1);
    int i = len - 1;

    if (nbr == 0)
        str[0] = '0';

    int tmp = 0 ;
    while (nbr > 0)
    {
        tmp = nbr % 10;
        str[i] = tmp + '0';
        nbr = nbr / 10;
        i--;
    }
    str[len] = '\0';
    return str ;
}

int main()
{
    char *str = ft_itoa(4569872);
    write(1, str, 7);
    free(str);
    return (0);
}