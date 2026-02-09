/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:34:41 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 19:53:27 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc , char *argv[])
{
	if (argc != 4)
	{
		write(1,"\n",1);
		exit(0);
	}
	int i = 0 ; 
	int isAvailable = 0 ; 

	int len1 ; 
	int len2 ; 
	len1 = 0 ; 
	len2 = 0 ; 
	while (argv[2][len1])
		len1++ ;
		
	while (argv[3][len2])
		len2++ ;

	if (len2 != 1 || len1 != 1)
	{
		write(1,"\n",1);
		exit(0);
	}

	while (argv[1][i])
	{
		if ( argv[1][i] == argv[2][0])
		{
			isAvailable = 1 ; 
		}
		i++;
	}
	if (isAvailable == 0)
	{
		int k = 0 ; 
		while(argv[1][k]){
			write(1,&argv[1][k], 1) ; 
			k++ ;
		}
		write(1, "\n", 1); 
		exit(0);
	}
	i = 0 ; 
	while (argv[1][i])
	{
		if ( argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0] ; 
		}
		write(1,&argv[1][i], 1) ; 
		i++;
	}
	write(1, "\n", 1);
}