/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:55:19 by fgomes-n          #+#    #+#             */
/*   Updated: 2019/12/07 17:55:23 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int g_i[4];

void		ft_putchar(char a, char b, char c, char d);

void		ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putchar(a / 10, a % 10, b / 10, b % 10);
				if ((a + b) < 197)
					write(1, ", ", 2);
			}
			b++;
		}
		a++;
		b = a;
	}
}

void		inicializa(void)
{
	g_i[0] = 0;
	g_i[1] = 0;
	g_i[2] = 0;
	g_i[3] = 0;
}

void		ft_putchar(char a, char b, char c, char d)
{
	char e;

	a += '0';
	b += '0';
	c += '0';
	d += '0';
	e = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &e, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}
