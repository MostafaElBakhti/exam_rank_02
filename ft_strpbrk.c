/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:46:20 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 14:46:20 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0 ; 
    int j = 0 ; 
    while(s1[i])
    {
        j = 0 ;
        while (s2[j])
        {
            if ( s1[i] == s2[j])
                return (char *)(s1+i) ;

            j++ ;
        }
        i++;
    }
    return NULL ; 
}   

int main ()
{
    char *s1 = "abcdef" ; 
    char *s2 = "xdf" ; 
    char *test = strpbrk(s1 , s2) ; 
    if (test)
        printf("%s" , test) ; 
    else
        printf("NULL") ; 
}