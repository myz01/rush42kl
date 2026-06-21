/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 11:14:16 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 13:31:14 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	i;
	int	j;
	char	x;
	int	clues[16];

	if (argc != 2)
    		write(1, "Error\n", 6);
	

	i = 0;
	j = 0;
	while	(argv[1][i])
	{
		if(argv[1][i] == ' ')
			i++;
		else
		{
			clues[j] = atoi(&argv[1][i]);
			x = clues[j] + '0';
			ft_putchar(x);
			j++;
			while (argv[1][i] != ' ' && argv[1][i])
				i++;
		}
	}
	ft_putchar('\n');

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

//trying to use this from main to this function 
void	ft_printgrid(int grid[4][4])
{
	int	row;
	int	col;
	
	row = 0;
	while(i < 4)
	{
	
	}

}
