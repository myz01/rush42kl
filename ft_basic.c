/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:53:10 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 16:03:07 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "ft_header.h"


void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_printstr(char *str)
{
        int     i;

        i = 0;
        while(str[i])
        {
                ft_putchar(str[i]);
                i++;
        }
}

int     is_digit(char c)
{
        if(c >= '0' && c <= '9')
                return (1);
        return (0);
}

int     ft_strlen(char *str)
{
        int     i;
        i = 0;

        while(str[i])
                i++;
        return (i);
}

