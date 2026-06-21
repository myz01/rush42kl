#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{	
	int	i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_counstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
		
	return (i);
}

int	is_digit(char c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	
	while(str[i])
		i++;
	return (i);
}

/* Count single digits only, ignore other digits, 0 means there would be double digits, else return single digit count*/
int	ft_check_only_single_digit(char *str)
{
	int	i;
	int	counter;
	
	i = 0;
	counter = 0;
	while(str[i] != '\0')
	{
		if(is_digit(str[i]))
		{
			if(
			if(i == 0 && str[i+1] == ' ')
			{
				counter++;
			}
			else if(str[i + 1] == '\0' && str[i - 1] == ' ')
			{
				counter++;
			}	
			else if(str[i - 1] == ' ' && str[i + 1] == ' ')
			{
				counter++;
			}
			else
				return (0);
		}
		
		i++;
	}
	return (counter);
}
/*
void	assign_sight_level(board, int row_index, int col_index)
{	
	int	number_of_sights;
	
	number_of_sights = 4;
	while(str[i])
	{
		if(is_digit(str[i])
		{
			
		}
	}
	
	
}*/

int	main(int argc, char *argv[])
{
	if(argc != 2)
	{
		ft_printstr("Please input only 2 arguments. Example: ./a.out \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\"\n");
		return (0);
	}
	
	if(ft_counstr(argv[1]) && !ft_check_only_single_digit(argv[1]))
	{
		ft_printstr("Please input only 16 single digits to set the sight levels for 4 sides.");
		return (0);
	}
	
	/*char *user_sight_levels[];
	
	user_sight_levels = argv[1];
	int	board[6][6] = {
	
	}*/
}
