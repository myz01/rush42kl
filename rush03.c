/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 10:57:43 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/14 09:55:10 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rec.h"

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j <= y)
	{
		i = 0;
		while (i <= x)
		{
			print_char(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_char(int x, int y, int i, int j)
{
	if (j == 0 || j == y)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
