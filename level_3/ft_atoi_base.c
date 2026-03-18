/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 00:49:05 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/18 00:58:26 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_value(char c)
{
    if(c >= '0' && c <= '9')
        return (c - '0');
    if(c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    if(c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (-1) ;
}

int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int i = 0 ; 
    int value = 0 ; 
    int result = 0;
    
    if(str_base < 2 || str_base > 16)
        return (0);

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    
    while(str[i])
    {
        value = get_value(str[i]) ;
        if(value == -1 || value >= str_base)
            break;
        result = result * str_base + value;
        i++;
    }
    return (result * sign);
}