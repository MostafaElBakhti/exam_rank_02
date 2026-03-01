/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:22:46 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 14:22:46 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t  i = 0 ; 
    size_t  j  ; 
    int     found  ; 
    while (s[i])
    {
        found = 0 ;
        j = 0 ; 
        while (accept[j])
        {
            if ( s[i] == accept[j])
                found = 1 ;
                break ; 
            j++;
        }
        if (found != 1)
            return i ; 
        i++;
    }
    return i ; 
}

int main ()
{
    char *s = "abcde123" ; 
    char *accept = "abcde" ; 

    size_t test  = ft_strspn(s , accept) ; 
    // printf("\n-----------------nn\n") ; 

    printf("%d"  , test ) ;
}