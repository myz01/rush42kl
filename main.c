/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:47:24 by muhabin3          #+#    #+#             */
/*   Updated: 2026/06/21 16:37:41 by muhabin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int     main(int argc, char *argv[])
{
	int grid[4][4];

        if(argc != 2)
        {
                ft_printstr("Please input only 2 arguments. Example: ./a.out \"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2\"\n");
                return (0);
        }

        if(ft_strlen(argv[1]) && !ft_check_only_single_digit(argv[1]))
        {
                ft_printstr("Please input only 16 single digits (1-4) to set the sight levels for 4 sides.");
                return (0);
        }

	ft_print_grid(grid);

        /*char *user_sight_levels[];

        user_sight_levels = argv[1];
        int     board[6][6] = {

        }*/
}

