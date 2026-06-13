/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 10:57:43 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/13 17:35:54 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rec.h"

void	rush(int x, int y)
{
/*	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			if (i == 1 || i == x)
				ft_putchar('x');
			if(j == 1 || j == y)
				ft_putchar('y');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
*/

	int i, j;

	for(j=0; j<=y; j++)
	{
		for(i=0; i<=x; i++)
		{
			if(j == 0 || j == y)
				if (i == 0)			
					ft_putchar('A');
				else if(i == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				if(i == 0 || i == x)
					ft_putchar('B');
				else
					ft_putchar(' ');
		}
		ft_putchar('\n');
	}

}

