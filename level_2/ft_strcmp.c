/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 23:10:11 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/09 23:10:11 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0 ; 
    int res = 0 ;

    while (s1[i] && s2[i])
    {
        res = s1[i] - s2[i] ; 
        if( res != 0)
            return res ; 
        i++;
    }

    return 0 ; 
}
