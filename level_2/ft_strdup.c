/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:37:37 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/14 14:37:37 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *copy;
    int len = 0 ; 
    int i = 0 ; 

    while(src[len])
        len++; 
    copy = malloc(len + 1); 

    if(!copy)
        return (NULL);
    while(src[i])
    {
        copy[i] = src[i] ; 
        i++;
    } 
    copy[i] = '\0' ; 
    return copy ; 
}

int main ()
{
    char *test = "hello  yy" ; 
    char *tt = ft_strdup(test) ; 
    printf("%s" , tt) ; 
}