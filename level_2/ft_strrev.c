/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:58:59 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 14:58:59 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0 ; 
    int j = 0 ; 
    char tmp  ;
    while (str[i])
    {
        i++;
    }
    i-- ; 
    while (j < i)
    {
        tmp = str[j] ; 
        str[j] = str[i] ;
        str[i] = tmp ;  
        j++ ; 
        i-- ; 
    }
    
    return str ; 
}

int main()
{
    char s[] = "12345";
    char *test = ft_strrev(s);
    printf("%s" , test) ; 
}