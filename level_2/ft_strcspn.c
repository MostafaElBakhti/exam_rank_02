/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:58:04 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 13:58:04 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strcspn(const char *s, const char *charset)
{
    size_t i ; 
    size_t j ; 

    i = 0 ; 
    while (s[i])
    {
        j = 0 ; 
        while (charset[j])
        {
            if (s[i] == charset[j])
                return i ;
            j++ ;
        }
        
        i++;
    }
    return i ; 
}

int main()
{
    char *s = "hello world" ; 
    char *charset = " " ; 

    size_t test  = strcspn(s , charset) ; 
        // printf("\n-----------------nn\n") ; 

    printf("%d"  , test ) ;
}