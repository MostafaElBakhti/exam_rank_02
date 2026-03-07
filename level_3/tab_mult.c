/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:37:12 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/03 15:37:12 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
    int i = 0 ; 
    int num = 0 ; 
    while (s[i])
    {
        num = num * 10 + (s[i] - '0') ; 
        i++;
    }
    return num ;
}
int ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
    return (0);
}

int main(int argc ,char **argv)
{
    int test = ft_atoi(argv[1]);
    int i = 1 ; 
    int res ; 
    while (i <= 9 )
    {
        res = i * test ;
        ft_putnbr(i);
        write(1," x ",3);
        ft_putnbr(test);
        write(1," = ",3);
        ft_putnbr(res);
        write(1,"\n",1);
        i++;
    }
    return (0); 
}