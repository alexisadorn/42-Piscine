/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 09:04:01 by exam              #+#    #+#             */
/*   Updated: 2016/12/06 10:04:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while((s1[i] != '\0') && (s2[j] != '\0'))
	{
		if (s1[i] != s2[j])
			j++;
		else
		{
			i++;
			j++;
		}
	}
	if(s2[j] == '\0' && s1[i] != s2[j])
		ft_putchar('\n');
	else
	{
		ft_putstr(s1);
		ft_putchar('\n');
	}
}


int		main(int argc, char **argv)
{	
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return (0);
}
