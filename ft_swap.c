/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:38:23 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 16:42:54 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{	
	int tmp ; 
	tmp = *a ; 
	*a = *b ; 
	*b = tmp ; 
	
	printf("%d" , *b) ; 

}	

int main ()
{
	int a = 5 ; 
	int b = 8 ; 
	ft_swap(&a,&b) ; 
}