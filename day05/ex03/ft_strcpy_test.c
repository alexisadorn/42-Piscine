/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 22:00:48 by adorn             #+#    #+#             */
/*   Updated: 2016/08/16 12:57:51 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
		int i;

		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	return (dest);
}

int		main(void)
{
		char dest[10];
		char src[] = "thissucks";

		strcpy(dest, src);
		printf("This is the src: %s\n", src);
		printf("%s", dest);
		return (0);
}
