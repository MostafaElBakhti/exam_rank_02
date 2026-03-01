/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 01:27:56 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/09 01:27:56 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc , char *argv[])
{
    // if (argc != 2)
	// {
	// 	write(1,"\n",1);
	// 	return(0);
	// }
    int i = 97 ; 
    int count = 0 ;
    while (i <= 122)
    {
        printf("%c" , i) ; 
        count++ ;
        i++;
    }
    
    printf("%d" , count) ; 

    write(1, "\n", 1);
}