/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 10:57:43 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/15 13:16:42 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rec.h"

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
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
	if (j == 1 || j == y)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
