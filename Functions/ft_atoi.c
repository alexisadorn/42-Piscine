/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:54:48 by adorn             #+#    #+#             */
/*   Updated: 2016/08/16 21:37:08 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE(x) (x=='\t'||x=='\n'||x=='\v'||x=='\f'||x=='\r'||x==' ')

int		ft_atoi(char *str)
{
	unsigned long long	x;
	int					i;
	int					negative;

	i = 0;
	x = 0;
	negative = 1;
	while (SPACE(str[i]))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		negative = str[i] == '-' ? -1 : 1;
		str++;
	}
	while (*str == '0')
		str++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (negative * x);
		x = x * 10 + str[i++] - '0';
	}
	if (i > 19 || x > 9223372036854775807)
		return (negative == 1 ? -1 : 0);
	return (x * negative);
}
