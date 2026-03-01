/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:21:19 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/07 15:49:36 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13) )
		return 1;

	return 0 ; 
}

int main(int argc ,char *argv[]) 
{
	int i ; 

	if (argc != 2)
	{
		write(1,"\n",1);
		return 0 ;
	}
	
	i = 0 ; 

	while (is_space(argv[1][i]))
		i++;

	while (argv[1][i] != ' ' && argv[1][i] != '\0')
	{
		printf("%c" , argv[1][i]) ; 
		i++;
	}
	

}