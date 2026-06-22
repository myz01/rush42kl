/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:13:19 by jodehii           #+#    #+#             */
/*   Updated: 2026/06/21 16:06:46 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_printstr(char *str);
int		is_digit(char c);
int		ft_strlen(char *str);
int		ft_check_only_single_digit(char *str);
void	ft_print_grid(int grid[4][4]);

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	negative;

	i = 0;
	num = 0;
	negative = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			negative++;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + str[i++] - '0';
		else
			return (0);
	}
	if (negative % 2 != 0)
		num = num * -1;
	return (num);
}

/*int	main(void)
{
	char	*str = "1234";

	printf("%d", ft_atoi(str));
}*/
