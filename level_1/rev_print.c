/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:46:11 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 17:33:30 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc , char *argv[])
{	
	int i ; 
	int len ;
	if (argc != 2)
	{
		printf("\n");
		return 0 ; 
	}
	len = 0 ;
	while(argv[1][len])
		len++ ;
	
	i = 0 ; 
	while(len > 0 )
	{
		printf("%c" , argv[1][len - 1]) ;
		len--;
	}
    printf("\n");
    return 0;
}