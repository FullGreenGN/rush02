/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fullgreen <fullgreen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:43:25 by fullgreen         #+#    #+#             */
/*   Updated: 2024/08/04 16:18:53 by fullgreen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	t_list	*tab;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0 || av[1] >= 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = process("numbers.dict");
		ft_print(ft_atoi(av[1]), tab, first);
	}
	return (0);
}
