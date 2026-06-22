/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:47:24 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 16:55:23 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_printstr(char *str);
int		is_digit(char c);
int		ft_strlen(char *str);
int		ft_check_only_single_digit(char *str);
void	ft_print_grid(int grid[4][4]);

int	main(int argc, char *argv[])
{
	int	grid[4][4];

	if (argc != 2)
	{
		ft_printstr("Please input only 2 argms.\"\n");
		return (0);
	}
	if (ft_strlen(argv[1]) && ft_check_only_single_digit(argv[1]) != 16)
	{
		ft_printstr("Please input only 16 single digits (1-4) .");
		return (0);
	}
	ft_print_grid(grid);
}
