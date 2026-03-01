/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:50:34 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 16:14:04 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i ; 
	i = 1 ; 
	while (i <= 100)
	{
		if (  i % 3 == 0)
			printf("fizz\n") ;
		else if (i % 5 == 0)
			printf("buzz\n") ; 
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz\n");
		else 
			printf("%i\n" , i) ;
		i++;
	}
	
}