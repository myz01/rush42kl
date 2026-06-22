/* ************************************************************************** */
/*											 */
/*                                                :::    ::::::::		*/
/*   ft_chcknmbr.c                                      :+:      :+:    :+:   */
/*                                             +:+ +:+       +:+       */
/*   By: muhabin3 <muhabin3@student.42.fr>       +#+  +:+      +#+     */
/*                                             +#+#+#+#+#+   +#+              */
/*   Created: 2026/06/21 15:59:40 by muhabin3         #+#    #+#            */
/*   Updated: 2026/06/21 17:19:22 by jodehii          ###   ########.fr       */
/*                                                                      */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_printstr(char *str);
int		is_digit(char c);
int		ft_strlen(char *str);
int		ft_check_only_single_digit(char *str);
void	ft_print_grid(int grid[4][4]);

/* Count single digits only, ignore other digits, 
0 means there would be double digits, else return single digit count*/
int	ft_check_only_single_digit(char *str)
{
	int	i;
	int	counter;
	int	clues[16];
	int	x;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (is_digit(str[i]))
		{
			if (str[i] >= '5' && str[i] <= '9')
				return (0);
			if (i == 0 && str[i + 1] == ' ')
				counter++;
			else if (str[i + 1] == '\0' && str[i - 1] == ' ')
				counter++;
			else if (str[i - 1] == ' ' && str[i + 1] == ' ')
				counter++;
			else
				return (0);
		}
		i++;
	}
	return (counter);
}
