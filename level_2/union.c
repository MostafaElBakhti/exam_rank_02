/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 00:15:04 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/17 00:37:33 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int has_seen(char c)
{
	static int arr[256] = {0} ;

	if (arr[c] == 1)
		return 1 ; 
	arr[c] = 1 ; 
	return 0 ; 
}

int main(int argc , char *argv[]) 
{
	if(argc != 3)
	{
		write(1,"\n",1) ; 
		return 0 ; 
	}

	int i = 0 ; 
	while (argv[1][i])
	{
		if(!(has_seen(argv[1][i])))
		{
			printf("%c" , argv[1][i]) ; 
		}
		i++ ;
	}
	i = 0 ; 
	while (argv[2][i])
	{
		if(!(has_seen(argv[2][i])))
		{
			printf("%c" , argv[2][i]) ; 
		}
		i++ ;
	}
	
	// write(1,"\n",1) ; 
	return 0 ; 

}