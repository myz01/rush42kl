/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 11:14:16 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 11:38:27 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main()
{
	int	grid[4][4];
	int	i;
	int	j;
	char	x;

	i = 0;
	while(i < 4)
	{	
		j = 0;
		while(j < 4)
		{
			grid[i][j] = 0;
			x = grid[i][j] + '0';
			ft_putchar(x);
			j++;	
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
