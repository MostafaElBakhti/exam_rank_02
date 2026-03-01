/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:53:18 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/16 00:12:29 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{

    unsigned char tmp = 0 ; 
	int i = 8 ; 
	while (i--)
	{
		tmp = (tmp << 1) | (octet & 1 ) ; 
		octet >>= 1 ;   
	}
	
	return tmp ;
}

int main()
{
    printf("%c" , reverse_bits(2)) ; 
}
// 0000 0000
// 0000 0010