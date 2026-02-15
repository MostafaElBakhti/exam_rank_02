/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:53:18 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/15 13:53:18 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result = 0 ; 
    unsigned char bit ; 

    int i = 8 ; 

    while (i--)
    {
        //      0000 0000          0000 0010
        result = (result << 1 ) | (octet & 1 ) ; 
        octet >>= 1 ; 
    }
    

}

int main()
{
    reverse_bits(2) ;  
}