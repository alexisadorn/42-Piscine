/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:05:04 by adorn             #+#    #+#             */
/*   Updated: 2016/11/17 16:27:00 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SPACE(x) (x=='\t'||x=='\v'||x=='\f'||x=='\n'||x=='\r'||x==' ')

int		ft_atoi(const char *str)
{
	unsigned long long x;
	int i;
	int negative;

	x = 0;
	i = 0;
	negative = 1;
	while(SPACE(str[i]))
		str++;
	if(str[i] == '-' || str[i] == '+')
	{
		negative = str[i] == '-' ? -1 : 1;
		str++;
	}
	while(*str == 0)
		str++;
	while(str[i] != '\0')
	{
		if(str[i] > '9' || str[i] < '0')
			return (negative * x);
		x = x * 10 + str[i++] - '0';
	}
	return (x * negative);
}
