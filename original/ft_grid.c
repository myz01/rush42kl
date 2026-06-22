/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 16:33:39 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 16:42:03 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_printstr(char *str);
int		is_digit(char c);
int		ft_strlen(char *str);
int		ft_check_only_single_digit(char *str);
void	ft_print_grid(int grid[4][4]);

void	ft_print_grid(int grid[4][4])
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
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
