/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 08:06:50 by adorn             #+#    #+#             */
/*   Updated: 2016/12/06 08:10:49 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bits;

	bits = 128;
	while (bits != 0)
	{
		if (bits <= octet)
		{
			write (1, "1", 1);
			octet = (octet % bits);
		}
		else
			write(1, "0", 1);
		bits = (bits / 2);
	}
}
