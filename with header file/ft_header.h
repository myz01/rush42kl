/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:49:36 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 16:35:16 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

int	ft_atoi(char *str);
void	ft_putchar(char c);
void    ft_printstr(char *str);
int     is_digit(char c);
int     ft_strlen(char *str);
int     ft_check_only_single_digit(char *str);
void    ft_print_grid(int grid[4][4]);

#endif
