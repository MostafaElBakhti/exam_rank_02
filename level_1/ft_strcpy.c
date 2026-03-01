/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:14:58 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 16:37:43 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_stpcpy(char *dst, const char *src){
	int i = 0 ; 

	while (src[i])
	{
		dst[i] = src[i] ;
		i++; 
	}
	dst[i] = '\0' ; 
	
	return dst ; 
}
