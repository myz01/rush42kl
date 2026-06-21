/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:13:19 by jodehii           #+#    #+#             */
/*   Updated: 2026/06/21 15:35:45 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(void)
{
	char	*str = "1234";

	printf("%d", ft_atoi(str));
}
