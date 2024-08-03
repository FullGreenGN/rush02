/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nums.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fullgreen <fullgreen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:24:41 by fullgreen         #+#    #+#             */
/*   Updated: 2024/08/03 16:29:19 by fullgreen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

int	getmult(int nb)
{
	if (nb >= 100)
		return (100);
    else if (nb >= 1000)
        return (1000);
    else if (nb >= 1000000)
        return (1000000);
    else if (nb >= 1000000000)
        return (1000000000);
    else if (nb >= 1000000000000)
        return (1000000000000);
    else if (nb >= 1000000000000000)
        return (1000000000000000);
    else if (nb >= 1000000000000000000)
        return (1000000000000000000);
    else
	    return (getdec(nb));
}