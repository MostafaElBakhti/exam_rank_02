/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                    :+:      :+:    :+:   */
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
    if (argc != 2)
	{
		write(1,"\n",1);
		return(0);
	}

    int i = 0 ;
    char c ; 
    while(argv[1][i])
    {

        if ((argv[1][i] >= 'a' &&  argv[1][i] <= 'z')  )
        {
            printf("%c" , argv[1][i]);
        }
        if(argv[1][i] >= 'A' &&  argv[1][i] <= 'Z')
        {
            printf("%c" , '_');
            printf("%c" , argv[1][i] + 32);
        }
        i++;
    }

    write(1, "\n", 1);
}