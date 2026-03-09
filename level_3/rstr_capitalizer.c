/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:37:39 by mel-bakh          #+#    #+#             */
/*   Updated: 2026/03/08 16:37:39 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    int i = 1 ; 
    while (i < argc)
    {
        int j = 0 ;
        while (argv[i][j])
        {
            if(((argv[i][j] >= 'a' &&  argv[i][j] <= 'z') 
            ||(argv[i][j] >= 'A' &&  argv[i][j] <= 'Z')) 
            && (argv[i][j+1] == ' ' ||argv[i][j+1] == '\0') )
            {
                if(argv[i][j] >= 'a' &&  argv[i][j] <= 'z')
                {
                    char c = argv[i][j] - 32;
                    write(1, &c, 1);
                }else{
                    write(1, &argv[i][j], 1);
                }

            }else{
                if(argv[i][j] >= 'a' &&  argv[i][j] <= 'z')
                    write(1, &argv[i][j], 1);
                else if(argv[i][j] >= 'A' &&  argv[i][j] <= 'Z')
                {
                    char c = argv[i][j] + 32;
                    write(1, &c, 1);
                }
                else
                    write(1, &argv[i][j], 1);
            }
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}