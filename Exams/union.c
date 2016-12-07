/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:00:52 by adorn             #+#    #+#             */
/*   Updated: 2016/11/15 08:24:57 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verif_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	while (s1[i])
	{
		if (ft_verif_char(s1, s1[i], i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
	{
		if (ft_verif_char(s2, s2[i], i) == 1)
		{
			if (ft_verif_char(s1, s2[i], len) == 1)
				ft_putchar(s2[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
