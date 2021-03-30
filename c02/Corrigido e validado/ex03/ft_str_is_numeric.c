/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 14:39:39 by fgomes-n          #+#    #+#             */
/*   Updated: 2019/12/12 14:39:43 by fgomes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0' && i == 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			c = 1;
		}
		else
		{
			c = 0;
			i = 1;
		}
		str++;
	}
	return (c);
}
