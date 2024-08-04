/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fullgreen <fullgreen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:08:44 by fullgreen         #+#    #+#             */
/*   Updated: 2024/08/04 14:32:07 by fullgreen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../includes/ft.h"

t_list	*process(char *file)
{
	long	i;
	int	fd;
	char	c[1];
	t_list	*tab;
	char *tmp;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 43)))
		exit(1);
	i = 0;
	while (i < 41)
	{
		coucou(i, tmp, fd, c, tab);
	}
	close(fd);
	return (tab);
}

void coucou(long i, char *tmp, int fd, char	c[1], t_list	*tab)
{
	tab[i].nb = ft_atoi(ft_getnb(fd));
	read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	tmp = ft_getval(fd, c);
	tab[i].val = ft_strdup(tmp);
	free(tmp);
	i++;
}
