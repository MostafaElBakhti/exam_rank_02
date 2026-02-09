/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 01:53:12 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/09 01:53:12 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int main (int argc , char *argv[]) 
{
    if (argc != 3)
	{
		write(1,"\n",1);
		return(0);
	}

    int i = 0 ; 
    int num1 = 0 ;
    int num2 = 0 ;
    int isNum1 = 0 ; 
    int isNum2 = 0 ;

    int len = 0 ; 
    while (argv[2][len])
    {
        len++;
    }
    if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%') || len != 1)
    {
        write(1, "hoo\n", 4);
        return (0);
    }
    int sign1 = 1 ;
    while (argv[1][i])
    {
    if ((argv[1][i] >= '0' && argv[1][i] <= '9' ) || (i == 0 && argv[1][i] == '-'))
        {
            isNum1 = 1 ;
        }else{
            isNum1 = 0 ; 
            break ;
        }
        i++;
    }
    i = 0 ; 
    int sign2 = 1 ; 
    while (argv[3][i])
    {
    if ((argv[3][i] >= '0' && argv[3][i] <= '9') || (i == 0 && argv[3][i] == '-'))
        {
            isNum2 = 1 ;
        }else {
            isNum2 = 0 ; 
            break ;
        }
        i++;
    }
    printf("isNum1: %d, isNum2: %d\n", isNum1, isNum2);
    if (isNum1 && isNum2)
    {
        num1 = atoi(argv[1]) ;
        num2 = atoi(argv[3]) ;
    }else{
        write(1, "noo\n", 4);
        return (0);
    }

    if (argv[2][0] == '+')
        printf("%d", num1 + num2) ;
    else if (argv[2][0] == '-')
        printf("%d", num1 - num2) ;
    else if (argv[2][0] == '*')
        printf("%d", num1 * num2) ;
    else if (argv[2][0] == '/')
    {
        if (num2 == 0)
        {
            write(1, "noo\n", 4);
            return (0);
        }
        printf("%d", num1 / num2) ;
    }
    else if (argv[2][0] == '%')
    {
        if (num2 == 0)
        {
            write(1, "\n", 1);
            return (0);
        }
        printf("%d", num1 % num2) ;
    }
    write(1, "\n", 1);
    return (0) ;

}