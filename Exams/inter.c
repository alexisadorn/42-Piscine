/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:03:03 by adorn             #+#    #+#             */
/*   Updated: 2016/12/05 16:26:35 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

static int	find_chars(char *str, char c)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != '\0')
	{
		if ((find_chars(s2, s1[i]) >= 0) && (find_chars(s1, s1[i]) == i))
			ft_putchar(s1[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
