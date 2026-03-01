/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:26:00 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/02/28 17:26:00 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int is_positive_number(char *str)
{
    int i = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-' )
        return (0);
    
    if(str[i] < '0' || str[i] > '9')
        return (0);
    return (1);
}
int ft_atoi(char *str)
{
    int i = 0 ; 
    int res = 0 ; 
    while (str[i] == ' ')
        i++;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0') ; 
        i++;
    }
    
    return res ;
}
void ft_putnbr(int n )
{
    char c ;
    if (n >= 10)
        ft_putnbr(n /10);
    c = (n % 10 ) + '0' ; 
    write(1,&c,1);
}

int main(int argc, char **argv)
{
    if (argc !=  2 )
    {
        write(1,"0",1);
        return (0);
    }

    int j ;
    int num ;
    int count ;
    int sum = 0 ;
    if (is_positive_number(argv[1]) == 0)
    {
        write(1,"0\n",2);
        return (0);
    }
    num = ft_atoi(argv[1]);
    int i = 2 ; 
    while (i <= num)
    {
        j = 1 ; 
        count = 0 ; 
        while(j <= i)
        {
            if (i % j == 0 )
                count++;
            j++;
        }
        if (count == 2)
            sum += i;
        i++;
    }
    
    ft_putnbr(sum);
    write(1,"\n",1) ;
    return (0);
}